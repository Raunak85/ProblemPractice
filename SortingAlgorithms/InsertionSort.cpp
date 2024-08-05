#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    int temp,j;
    for(int i=1;i<n;i++){
        temp = arr[i];
        j = i;
        while(j>0 && arr[j-1] > temp ){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = temp;
    }
}

int main(){
    int arr[] = {1,3,2,5,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
}