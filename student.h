#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
public:
    //Student();
    Student(string newName,string newSecondName,int newAge,string newGender);
    string getName() const;
    void setName(const string &newName);

    string getSecondName() const;
    void setSecondName(const string &newSecondName);

    int getAge() const;
    void setAge(int newAge);

    string getGender() const;
    void setGender(const string &newGender);

private:
    string name;
    string secondName;
    int age;
    string gender;
};

#endif // STUDENT_H
