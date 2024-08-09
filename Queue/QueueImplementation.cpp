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
        if(back == size-1){
            cout<<"queue is Overflow"<<endl;
            return;
        }
        arr[++back] = val;
        cout<<val<<" inserted"<<endl;
    }
    void pop(){
        if(front>back){
            cout<<"Queue is empty"<<endl;
            front = -1;
            back = -1;
            return;
        }
        cout<<arr[front]<<" deleted"<<endl;
        front++;
        if(front>back){
            front = 0;
            back = -1;
        }
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
    q.pop();
    q.top();
    q.pop();
}