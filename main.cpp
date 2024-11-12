#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Hello, World!" << std::endl;  // Output to console, not to files

    return a.exec();
}
