#include "janela.h"
#include <QApplication>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    char c, b,t;
    QApplication a(argc, argv);
    Janela w;
    w.show();
    c=157;
    b=29;
    t = c&b;
    if(t=b){
        cout << "T==B" << endl;
    }else{
        cout << "T!=B" << endl;
    }


    return a.exec();
}
