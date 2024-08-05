#include<iostream>
using namespace std;


void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        bool isSort = false;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
                isSort = true;
            }
        }
        if(isSort){
            swap(arr[i],arr[min]);
        }

    }
}

int main(){
    int arr[] = {5,3,6,2,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
}