#include<iostream>
using namespace std;
class student{
    int roll;
    public:
           student(int r){
            roll=r;
           } 
           student(student & s){
            roll=s.roll;
           }
           void display(){
            cout<<"Roll:"<<roll<<endl;
           }
        };
        int main(){
            student s1(101);
            student s2=s1;
            s1.display();
            s2.display();
            return 0;
        }