#include<iostream>

using namespace std;

class Queue{
    public:
    int* arr;
    int size;
    int front;
    int back;
    Queue(){
        size = 10;
        arr = new int[size];
        front = 0;
        back = -1;
    }

    void push(int val){
        if(back >= size){
            cout<<"queue is Overflow"<<endl;
            return;
        }
        arr[++back] = val;
    }
    void pop(){
        if(back == -1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<arr[back]<<" deleted"<<endl;
        back--;
    }
    void top(){
        if(front > back){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Front = "<<arr[front]<<endl;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.top();
    

    
}