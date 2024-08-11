#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int size;
    int front,rear;
    CircularQueue(int s){
        size = s+1; // one extra space need to store because one space will empty to check condition f or r started to 0;
        arr=new int[size];
        front = rear = 0;
    }

    void push(int val){
        if(((rear+1)%size) == front){
            cout<<"Queue is full!!"<<endl;
            return;
        }
        arr[rear] = val;
        cout<<arr[rear]<<" Inserted"<<endl;
        rear = (rear+1)%size;
    }
    void pop(){
        if (front == rear){
            cout<<"Queue is Empty !!"<<endl;
            return;
        }
        cout<<arr[front]<<" Deleted!!"<<endl;
        front = (front+1)%size;
    }

    void top(){
        if(front == rear){
            cout<<"Queue is Empty !!"<<endl;
            return;
        }
        cout<<arr[front]<<" : top elemet"<<endl;
    }
};

int main(){
    CircularQueue cq(3);
    cq.push(1);
    cq.pop();
    cq.top();
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.pop();
    cq.top();
    cq.push(5);
}