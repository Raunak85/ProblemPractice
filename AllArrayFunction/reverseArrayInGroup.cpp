#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int k=3;
    int n = sizeof(arr)/sizeof(arr[0]);
                // Method 1;
    // int i=0;
    // int l=0;
    // while(i<n){
    //     i = l;
    //     int j = k+i-1;
    //     l = j+1;
    //     if(j>= n){
    //         j = n-1;
    //     }
    //     while(i<j){
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j--;
    //     }
    // }

                // method 2
    for(int i=0;i<n;i += k){
        int start = i;
        int end = min(k+i-1,n-1);
        while (start < end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
    }
    cout<<"reverse array in group"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
}