#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};

void insertAtTail(Node* &head,int data){
    Node* newNode=new Node(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    
}

void display(Node* head){
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    while (temp->prev != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    
    
}

int main(){
    Node* head = nullptr;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
}