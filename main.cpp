#include <QCoreApplication>
#include "student.h"
#include <vector>
#include <QDebug>

using namespace std;

void foo1(vector <Student> &vec,string sname,string ssecondName, int chAge){
    for (int i=0; i<vec.size(); i++) {
        if(vec.at(i).getName()==sname || vec.at(i).getSecondName()==ssecondName) {
            vec.at(i).setAge(chAge);
        }
    }
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
    foo1(vec,"Tatyana","Livanova",16);
    qDebug()<<vec.at(2).getAge();
    return a.exec();
}
