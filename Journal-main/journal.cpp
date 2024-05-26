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

void Journal::fulling(string path, string nameFile)
{
    pathPr=path;
    nameFilePr=nameFile;
    vector <string> vec;
    string line;
    ifstream rfile;
    rfile.open(path+nameFile+".txt");
    if (rfile.is_open()) {
        while (getline(rfile, line)) {
            vec.push_back(line);//vec.at(i)=line;i++;
        }
        rfile.close();
    } else {
        qDebug()<<"No this file";
    }
    string buf;
    string str;
    int t=0;
    for(int i=0;i<vec.size();i++){
        str=vec.at(i);
        Student st("","",0,"");
        list.push_back(st);
        for (int j=0;j<str.size();j++){
            if (str.at(j)==' ') {
                switch (t) {
                case 0:
                    list.at(i).setSecondName(buf);
                    break;
                case 1:
                    list.at(i).setName(buf);
                    break;
                case 2:
                    list.at(i).setAge(stoi(buf));
                    break;
                case 3:
                    list.at(i).setGender(buf);
                    break;
                }
                buf="";
                t++;
            }else{
                buf.push_back(char(str.at(j)));
            }
        }

    }

}

void Journal::changing(string path, string nameFile)
{
    vector <string> vec;
    string buf;
    for (int i=0; i<list.size();i++){
        vec.push_back(list.at(i).getSecondName()+" "+
        list.at(i).getName()+" "+
        to_string(list.at(i).getAge())+" "+
        list.at(i).getGender());
    }
    fstream wfile;
    wfile.open(path+nameFile+".txt");
    for (int i;i<vec.size();i++) {
        wfile<<vec.at(i)<<endl;
    }
    wfile.close();
}

string Journal::getPathPr() const
{
    return pathPr;
}

void Journal::setPathPr(const string &newPathPr)
{
    pathPr = newPathPr;
}

string Journal::getNameFilePr() const
{
    return nameFilePr;
}

void Journal::setNameFilePr(const string &newNameFilePr)
{
    nameFilePr = newNameFilePr;
}

