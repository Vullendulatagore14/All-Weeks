#include<iostream>
using namespace std;
struct node{
    int data;
    node *prev;
    node *next;
};
int main(){
    node *head=NULL;

    node *n1=new node();
    n1->data=10;
    n1->prev=NULL;
    n1->next=NULL;
    head=n1;

    node *n2=new node();
    n2->data=20;
    n2->prev=n1;
    n2->next=NULL;
    n1->next=n2;

    node *n3=new node();
    n3->data=30;
    n3->prev=n2;
    n3->next=NULL;
    n2->next=n3;

    cout<<"Forward:";
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

   cout<<endl<<"Backward:";
    node *temp1=n3;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->prev;
    }
    return 0;
}