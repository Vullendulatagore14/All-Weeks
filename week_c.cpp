#include<iostream>
using namespace std;
class student{
    int roll;
    float marks;
    public:
    student(){
        roll=0;
        marks=0.0;
    }
    student(int r){
        roll=r;
        marks=0.0;
    }
    student(int r,float m){
        roll=r;
        marks=m;
    }
    void display(){
        cout<<"roll:"<<roll<<"marks:"<<marks<<endl;
    }
};
int main(){
    student s1;
    student s2(10);
    student s3(11,25.8);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}