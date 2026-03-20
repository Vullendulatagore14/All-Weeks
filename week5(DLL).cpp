#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *previous;
};

void backwardDisplay(Node *head){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->previous;
    }
}

int main(){
    Node *head = NULL;

    // Example nodes
    Node *n1 = new Node{10,NULL,NULL};
    Node *n2 = new Node{20,NULL,NULL};
    Node *n3 = new Node{30,NULL,NULL};

    head = n1;
    n1->next = n2;
    n2->previous = n1;
    n2->next = n3;
    n3->previous = n2;

    backwardDisplay(head);

    return 0;
}