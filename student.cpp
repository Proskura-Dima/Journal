#include "student.h"

/*Student::Student()
{

}*/

Student::Student(string newName, string newSecondName, int newAge, string newGender)
{
    name=newName;
    secondName=newSecondName;
    age=newAge;
    gender=newGender;
}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

string Student::getSecondName() const
{
    return secondName;
}

void Student::setSecondName(const string &newSecondName)
{
    secondName = newSecondName;
}

int Student::getAge() const
{
    return age;
}

void Student::setAge(int newAge)
{
    age = newAge;
}

string Student::getGender() const
{
    return gender;
}

void Student::setGender(const string &newGender)
{
    gender = newGender;
}
