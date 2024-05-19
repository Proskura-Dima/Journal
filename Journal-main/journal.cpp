#include "journal.h"

//Journal::Journal() {}

Journal::Journal(vector<Student> vec)
{

}

vector<Student> Journal::getList() const
{
    return list;
}

void Journal::setList(const vector<Student> &newList)
{
    list = newList;
}
void Journal::func1(string sname,string ssecondName, int chAge){
    for (int i=0; i<list.size(); i++) {
        if(list.at(i).getName()==sname || list.at(i).getSecondName()==ssecondName) {
            list.at(i).setAge(chAge);
        }
    }
}

vector <Student> Journal::func2(bool b)
{
    vector <Student> vec;
    for (int i=0; i<list.size(); i++) {
        if ((list.at(i).getAge()>=14)==b){
            vec.push_back(list.at(i));
        }
    }
    return vec;
}

vector<string> Journal::func3(char x)
{
    vector <string> vec;
    for (int i=0; i<list.size(); i++) {
        if (list.at(i).getSecondName().at(0)==x){
            vec.push_back(list.at(i).getSecondName()+" "+list.at(i).getName());
        }
    }
    return vec;
}

vector<Student> Journal::func2(string g)
{
    vector <Student> vec;
    for (int i=0; i<list.size(); i++) {
        if ((list.at(i).getGender()=="Male")==(g=="Male")){
            vec.push_back(list.at(i));
        }
    }
    return vec;
}
