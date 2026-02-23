#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
int main(){
    node *head=NULL;

    node *n1=new node();
    n1->data=10;
    n1->next=NULL;
    head=n1;

    node *n2=new node();
    n2->data=20;
    n2->next=NULL;
    n1->next=n2;

    node *n3=new node();
    n3->data=30;
    n3->next=NULL;
    n2->next=n3;

    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}