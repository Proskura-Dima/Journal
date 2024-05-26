#ifndef JOURNAL_H
#define JOURNAL_H

#include <vector>
#include "student.h"
#include <QDebug>
#include <fstream>

class Journal
{
public:
    Journal(vector <Student> vec);

    vector<Student> getList() const;
    void setList(const vector<Student> &newList);

    void func1(string sname,string ssecondName, int chAge);
    vector <Student> func2(bool b);
    vector <string> func3(char x);
    vector <Student> func2(string g);
    void fulling (string path,string nameFile);
    void changing (string path,string nameFile);

    string getPathPr() const;
    void setPathPr(const string &newPathPr);

    string getNameFilePr() const;
    void setNameFilePr(const string &newNameFilePr);


private:
    vector <Student> list;
    string pathPr;
    string nameFilePr;
};

#endif // JOURNAL_H
