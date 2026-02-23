#include<iostream>
#include<list>
using namespace std;
int main(){
    list<string>l;
    l.push_back("c++");
    l.push_back("java");
    l.push_back("python");
    cout<<"Elements in the list: ";
    for(list<string>::iterator it=l.begin(); it!=l.end(); ++it){
        cout<<*it<<" ";
    }
    l.push_front("DS");
    l.pop_back();
    cout<<"\nElements in the list after modifications: ";
    for(list<string>::iterator it=l.begin(); it!=l.end(); ++it){
        cout<<*it<<" ";
    }
    return 0;
}