#include<iostream>
using namespace std;



int main(){
    int arr[] = {1,2,2,3,3,4,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int temp[n],sizeOfTemp=0;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            temp[sizeOfTemp] = arr[i];
            sizeOfTemp++;
        }
    }
    cout<<"Non repeating value in array is = "<<endl;
    for(int i=0;i<sizeOfTemp;i++){
        cout<<temp[i]<<" ";
    }

}