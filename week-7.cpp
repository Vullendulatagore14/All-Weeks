#include <iostream>
using namespace std;
#define SIZE 5;
class stack{
    private:
        int top=-1;
        int st[5];
    public :
        stack(){
            top=-1;
        }
        bool isFull(){
            return top==4;
        }
        bool isEmpty(){
            return top==-1;
        }
        void push(int value){
            if(isFull()){
                cout<<"Stack Overflow"<<endl;
                return;
            }
            top++;
            st[top]= value;
            cout<<"Element pushed successfully "<<endl;
        }
        void pop(){
            if(isEmpty()){
                cout<<"No element present "<<endl;
                return;
            }
            top--;
            cout<<"Element poped - "<<st[top]<<endl;
        }

        void peek(){
            if(isEmpty()){
                cout<<"Stack Underflow"<<endl;
                return ;
            }
            cout<<"Peek Element - "<<st[top]<<endl;
        }
};

int main (){
    stack s1;
    int n;
    do{
        cout<<"Choose which operation you want to use :-"<<endl;
        cout<<"1.Enter element\n2.Delete the element\n3.View top element \n4.Empty check \n5.Full check\n6.Exit"<<endl;
        cin>>n;
    switch (n)
        {
            case 1:int a;
                   cin>>a;
                   s1.push(a);
                   break;
            
            case 2: s1.pop();
                    break;
            case 3: s1.peek();
                    break;
            case 4: if(s1.isEmpty()){
                    cout<<"Stack is empty"<<endl;
                    }else{
                    cout<<"Stack is  not empty"<<endl;
                 }
                    break;
            case 5:if(s1.isFull()){
                    cout<<"stack is full"<<endl; 
                }else{
                cout<<"stack is full"<<endl;
            } 
                    break;
            case 6:cout<<"Exiting the programm"<<endl;
                break;
            default:cout<<"Invalid Choice";
                
        }
    }while(n!=6);
}