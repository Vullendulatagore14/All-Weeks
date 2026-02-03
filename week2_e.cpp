#include<iostream>
using namespace std;
class student{
    int roll;
    public:
           student(int r){
            roll=r;
           }
           void display(){
            cout<<"Roll:"<<roll<<endl;
           }
};
int main(){
    student s1(101);
    s1.display();
    return 0;
}