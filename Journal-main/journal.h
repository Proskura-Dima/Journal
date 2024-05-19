#ifndef JOURNAL_H
#define JOURNAL_H

#include <vector>
#include "student.h"

class Journal
{
public:
    Journal(vector <Student> vec);
    vector<Student> getList() const;
    void setList(const vector<Student> &newList);
    void func1(vector <Student> &vec,string sname,string ssecondName, int chAge);
    vector <Student> func2(bool b);
    vector <string> func3(char x);
    vector <Student> func2(string g);
private:
    vector <Student> list;
};

#endif // JOURNAL_H
