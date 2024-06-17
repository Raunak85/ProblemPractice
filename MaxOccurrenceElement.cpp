#include<iostream>
using namespace std;

void Insert(int* arr,int size){
    cout<<"Enter the Elements "<<size<<" times"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void display(int arr[],int size){
    cout<<"Elements are:- "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void maxOccurrenceElement(int arr[],int size){
     int maxCountElement,MaxCount=1;
     bool flag = true;
    for(int i=0;i<size;i++){
        int count = 0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count>MaxCount){
            flag = false;
            MaxCount = count;
            maxCountElement = arr[i];
        }
    }
    if (flag)
    {
        cout<<"\nAll Element are equal Occurence in Array"<<endl;
        return;
    }
    
  
        cout<<"\nElement is :- "<<maxCountElement<<endl;
        cout<<"Count of element in array = "<<MaxCount<<endl;
}

int main(){
    int size;
    cout<<"Enter Size of array"<<endl;
    cin>>size;
    int arr[size];
    Insert(arr,size);
    display(arr,size);
    maxOccurrenceElement(arr,size);
}