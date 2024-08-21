#include<iostream>
using namespace std;

void conqure(int arr[],int si,int mid,int ei){
    int merge[si+ei+1];
    int ind1 = si;
    int ind2 = mid+1;
    int k=0;
    while(ind1<=mid && ind2 <= ei ){
        if(arr[ind1] <= arr[ind2]){
            merge[k++] = arr[ind1++];
        }else{
            merge[k++] = arr[ind2++];
        }
    }

    while(ind1<=mid){
        merge[k++] = arr[ind1++];
    }
    while(ind2 <= ei) {
        merge[k++] = arr[ind2++];
    }
    for(int i=si;i<=ei;i++){
        arr[i] = merge[i-si];
    }
}


void divide(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid = (si+ei)/2;
    divide(arr,si,mid);
    divide(arr,mid+1,ei);
    conqure(arr,si,mid,ei);

}


int main(){
    int arr[] = {2,3,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    divide(arr,0,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }

}