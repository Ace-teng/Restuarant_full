#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDir>
#include <QFileInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    
    qDebug() << "=== 修复菜单图片路径工具 ===";
    
    // 读取当前的menu.csv文件
    QString menuFile = QCoreApplication::applicationDirPath() + "/menu.csv";
    QFile file(menuFile);
    
    if (!file.exists()) {
        qDebug() << "菜单文件不存在:" << menuFile;
        return -1;
    }
    
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "无法打开菜单文件进行读取";
        return -1;
    }
    
    QStringList lines;
    QTextStream in(&file);
    QString header = in.readLine();
    lines.append(header);
    
    int fixedCount = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.trimmed().isEmpty()) continue;
        
        QStringList parts = line.split(',');
        if (parts.size() >= 4) {
            QString id = parts[0];
            QString name = parts[1];
            QString price = parts[2];
            QString imagePath = parts[3];
            
            // 检查图片路径
            if (!imagePath.isEmpty()) {
                QFileInfo fileInfo(imagePath);
                QString fileName = fileInfo.fileName();
                
                // 检查图片是否在images目录中
                QString imagesDir = QCoreApplication::applicationDirPath() + "/../images/";
                QString targetPath = imagesDir + fileName;
                
                if (QFileInfo(targetPath).exists()) {
                    // 图片存在，使用相对路径
                    QString newImagePath = "../images/" + fileName;
                    QString newLine = QString("%1,%2,%3,%4").arg(id, name, price, newImagePath);
                    lines.append(newLine);
                    qDebug() << "修复图片路径:" << imagePath << "->" << newImagePath;
                    fixedCount++;
                } else {
                    // 图片不存在，保持原路径
                    lines.append(line);
                    qDebug() << "图片不存在，保持原路径:" << imagePath;
                }
            } else {
                lines.append(line);
            }
        } else {
            lines.append(line);
        }
    }
    file.close();
    
    // 写回文件
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "无法打开菜单文件进行写入";
        return -1;
    }
    
    QTextStream out(&file);
    for (const QString& line : lines) {
        out << line << "\n";
    }
    file.close();
    
    qDebug() << "修复完成，共修复" << fixedCount << "个图片路径";
    qDebug() << "菜单文件已更新:" << menuFile;
    
    return 0;
}
