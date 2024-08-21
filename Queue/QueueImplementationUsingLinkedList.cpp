#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

class Queue{
    public:
    Node* head = nullptr;
    Node* front = nullptr;
    Node* rear = nullptr;


    void push(int val){
        Node* newNode=new Node(val);
        if(head == nullptr){
            head = newNode;
            rear = newNode;
            front = newNode;
             cout<<"Element Inserted !!"<<endl;
            return;
        }
        rear->next = newNode;
        cout<<"Element Inserted !!"<<endl;
    }

    void pop(){
        if(front == nullptr){
            cout<<"Queue is Empty !!"<<endl;
            return;
        }
        head=head->next;
        front = head;
    }

    void top(){
        if(front == nullptr){
            cout<<"Queue is Empty !!"<<endl;
            return;
        }
        cout<<"Top Element = "<<front->data<<" "<<endl;
    }
};

int main(){
    Queue q;
    q.pop();
    q.top();
    q.push(1);  
    q.push(1);  
    q.push(1);  
    q.top();
    q.top();
    q.top();
    q.pop();

}