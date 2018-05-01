#include <QCoreApplication>
#include <iostream>

int globalCounter = 0;

void ShowStr(const std::string& str)
{
   globalCounter++;
   std::cout << str << "\n";
}

void ShowStr(const std::string& str, const int val)
{
    globalCounter++;

    if (val != 0) {
        for (int i = 0; i < globalCounter; ++i) {
          std::cout << str << "\n";
        }

    }

}

int main(int argc, char *argv[])
{
    std::cout << "Start program.\n";

    QCoreApplication a(argc, argv);

    ShowStr("First");
    ShowStr("Second", 1);
    ShowStr("Third", 1);

    // some new code ..
    // end if new code.

    std::cout << "Finish program.\n";
    return a.exec();
}
