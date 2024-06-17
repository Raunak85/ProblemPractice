#include<iostream>
using namespace std;

void BubbleSort(int arr[]){

}

void newArr(int newArr,int* k,int value){
    if(k == 0){
        newArr[k] = value;
        return;
    }
    for(int i=0;i;i++)
}

void FindDuplicate(int arr[],int n,newArr){
    int k=0;
    int* ptr = &k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
            if(i == j){
                continue;
            }
            if(arr[i] == arr[j]){
                newArr(newArr,ptr,arr[i]);
                break;
            }
        }
    }
}

int main(){
    int arr[] = {3,2,3,4,3,2,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int newArr[n];
    FindDuplicate(arr,n,newArr);

}

