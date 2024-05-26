#include <QCoreApplication>
#include "student.h"
#include "journal.h"
#include <vector>
#include <QDebug>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

double calc(string Str)
{
    int t=0;
    char c;
    vector <string> vect= {"","",""};
    for (int i=0;i<Str.size();i++) {
        if (Str.at(i)=='+' ||
            Str.at(i)=='-' ||
            Str.at(i)=='*' ||
            Str.at(i)=='/') {
            t++;
            c=Str.at(i);
        }else{
            vect.at(t).push_back(char(Str.at(i)));
        }
    }
    //qDebug()<<vect.at(1);
    //char c=vect.at(1).c_str();
    switch (c) {
    case '+':
        return (stoi(vect.at(0))+stoi(vect.at(1)));
    case '-':
        return (stoi(vect.at(0))-stoi(vect.at(1)));
    case '*':
        return (stoi(vect.at(0))*stoi(vect.at(1)));
    case '/':
        return (stoi(vect.at(0))/stoi(vect.at(1)));
    }
    return 0;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Student studentFirst("Ivan","Petrovich",16,"Male");
    Student studentSecond("Maria","Dezhnyova",14,"Female");
    Student studentThird("Tatyana","Livanova",15,"Female");
    Student studentFourth("Adam","Smith",15,"Male");
    Student studentFifth("Friedrich","Engels",15,"Male");
    vector <Student> vec={studentFirst,studentSecond,studentThird,studentFourth,studentFifth};
    Journal journal(vec);
    /*string calcs;
    getline(cin,calcs);
    qDebug()<<calc(calcs);*/
    vector <Student> vecs;
    Journal journals(vecs);
    journals.fulling("C:/Users/Dima/Desktop/Classes/","8a");
    qDebug()<<journals.getList().at(0).getName();
    return a.exec();
}
