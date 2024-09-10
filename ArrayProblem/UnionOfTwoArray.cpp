#include<iostream>
#include<set>
using namespace std;

int main(){
    int arr1[] = {1, 2, 3, 4, 5} , arr2[] = {1, 2, 3};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    int n2 = sizeof(arr1)/sizeof(arr2[0]);
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    for(int i : st){
        cout<<i<<" ";
    }
    cout<<"\nsize = "<<st.size();
}