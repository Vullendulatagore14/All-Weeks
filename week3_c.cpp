#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> students;
    students[100]="Bunny";
    students[101]="Sunny";
    students[102]="Pandu";

    cout<<"Student Details:\n";
    for(map<int,string>::iterator it=students.begin();it!=students.end();it++){
        cout<<"ID: "<<it->first<<" Name: "<<it->second<<endl;
    }
    return 0;
}