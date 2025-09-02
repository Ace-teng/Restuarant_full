QT += core
QT -= gui

CONFIG += c++14 console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += test_images.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


