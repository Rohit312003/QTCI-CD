# project.pro

TEMPLATE = app
TARGET = myapp  # Replace with your desired executable name
INCLUDEPATH += .

# Adjust if necessary, e.g., add any Qt modules you use
QT += core gui

SOURCES += main.cpp
HEADERS += mainwindow.h

# Optional: Specify output directory
DESTDIR = ./build  # Place your executable in the build directory
