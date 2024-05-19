#include <QCoreApplication>
#include "student.h"
#include "journal.h"
#include <vector>
#include <QDebug>

using namespace std;



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
    qDebug()<<vec.at(2).getAge();
    return a.exec();
}
