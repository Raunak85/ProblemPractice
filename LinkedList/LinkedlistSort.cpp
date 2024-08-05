#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};  

void insert(Node* &head,int data){
    Node* newNode=new Node(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}


void display(Node* head){
    while(head != nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void sortLinkedList(Node* &head){
    Node* temp = head;
    while (temp->next != nullptr)
    {

        Node* nextptr = temp->next;
        while (nextptr != nullptr)
        {
           
            if(temp->data > nextptr->data){
                swap(temp->data,nextptr->data);
            }
            nextptr = nextptr->next;
        }
        temp = temp->next;
        
    }
    
}

int main(){
    Node* head = nullptr;
    insert(head,5);
    insert(head,4);
    insert(head,3);
    insert(head,1);
    insert(head,2);
    display(head);
    sortLinkedList(head);
    display(head);
}