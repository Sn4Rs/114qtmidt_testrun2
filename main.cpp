#include "mainwindow.h"
#include <QApplication>
#include <QScreen>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // Get screen geometry for optimal positioning
    QScreen *screen = QApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();
    
    // Create windows with descriptive titles
    MainWindow w("Window 1");
    MainWindow w2("Window 2");
    
    // Get window dimensions
    int windowWidth = 640;
    int windowHeight = 480;
    
    // Calculate optimal positions for side-by-side arrangement
    int spacing = 20; // Space between windows
    int totalWidth = windowWidth * 2 + spacing;
    int startX = (screenWidth - totalWidth) / 2;
    int startY = (screenHeight - windowHeight) / 2;
    
    // Position windows with optimized arrangement
    w.move(startX, startY);
    w2.move(startX + windowWidth + spacing, startY);
    
    w.show();
    w2.show();
    
    return a.exec();
}
