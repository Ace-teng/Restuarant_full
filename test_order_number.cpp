#include <QCoreApplication>
#include <QDate>
#include <QDateTime>
#include <QDebug>
#include <QMap>
#include <QString>

// 模拟Order类的静态成员和方法
class OrderTest {
public:
    static QDate currentDate;
    static int globalCounter;
    static QMap<QDate, int> dateCounterMap;
    
    static void resetCounterForDate(const QDate& date);
    static int getNextOrderNumber(const QDate& date);
    static void setMaxOrderNumber(const QDate& date, int maxNumber);
    static QString generateOrderId(const QDate& date);
};

// 静态成员初始化
QDate OrderTest::currentDate = QDate::currentDate();
int OrderTest::globalCounter = 0;
QMap<QDate, int> OrderTest::dateCounterMap;

// 重置指定日期的计数器
void OrderTest::resetCounterForDate(const QDate& date)
{
    dateCounterMap[date] = 0;
    if (date == currentDate) {
        globalCounter = 0;
    }
}

// 获取指定日期的下一个订单编号
int OrderTest::getNextOrderNumber(const QDate& date)
{
    // 如果该日期还没有记录，从1开始
    if (!dateCounterMap.contains(date)) {
        dateCounterMap[date] = 0;
    }
    
    // 返回下一个编号
    return ++dateCounterMap[date];
}

// 设置指定日期的最大订单编号
void OrderTest::setMaxOrderNumber(const QDate& date, int maxNumber)
{
    dateCounterMap[date] = maxNumber;
    // 如果是当前日期，同时更新全局计数器
    if (date == currentDate) {
        globalCounter = maxNumber;
    }
}

// 生成订单ID
QString OrderTest::generateOrderId(const QDate& date)
{
    int orderNumber = getNextOrderNumber(date);
    return QString("%1%2")
            .arg(date.toString("yyyyMMdd"))
            .arg(orderNumber, 3, 10, QChar('0'));
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    
    qDebug() << "=== 订单编号生成测试 ===";
    
    // 测试1：同一天连续生成订单
    QDate today = QDate::currentDate();
    qDebug() << "测试1：同一天连续生成订单";
    qDebug() << "日期:" << today.toString("yyyy-MM-dd");
    
    for (int i = 0; i < 5; i++) {
        QString orderId = OrderTest::generateOrderId(today);
        qDebug() << "订单" << (i+1) << ":" << orderId;
    }
    
    // 测试2：模拟从文件加载订单后更新计数器
    qDebug() << "\n测试2：模拟从文件加载订单后更新计数器";
    qDebug() << "假设文件中已有订单编号到005";
    OrderTest::setMaxOrderNumber(today, 5);
    
    // 继续生成新订单
    for (int i = 0; i < 3; i++) {
        QString orderId = OrderTest::generateOrderId(today);
        qDebug() << "新订单" << (i+1) << ":" << orderId;
    }
    
    // 测试3：模拟日期变化
    qDebug() << "\n测试3：模拟日期变化";
    QDate tomorrow = today.addDays(1);
    qDebug() << "新日期:" << tomorrow.toString("yyyy-MM-dd");
    
    // 重置当前日期
    OrderTest::currentDate = tomorrow;
    
    // 在新日期生成订单
    for (int i = 0; i < 3; i++) {
        QString orderId = OrderTest::generateOrderId(tomorrow);
        qDebug() << "新日期订单" << (i+1) << ":" << orderId;
    }
    
    // 测试4：回到原日期
    qDebug() << "\n测试4：回到原日期";
    OrderTest::currentDate = today;
    
    // 在原日期继续生成订单
    for (int i = 0; i < 2; i++) {
        QString orderId = OrderTest::generateOrderId(today);
        qDebug() << "原日期继续订单" << (i+1) << ":" << orderId;
    }
    
    qDebug() << "\n=== 测试完成 ===";
    
    return 0;
}
