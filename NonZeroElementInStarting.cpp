#include<iostream>
using namespace std;

void Array(int arr[],int n){
    int temp[n] = {0};
    int indx = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp[indx++] = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
        // cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = {1,2,0,0,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    Array(arr,size);
    for(int i=0;i<size;i++){
    
        cout<<arr[i]<<" ";
    }
}