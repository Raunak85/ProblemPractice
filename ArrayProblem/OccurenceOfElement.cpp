#include<iostream>
#include<map>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 3, 4, 1, 4, 5, 1, 2};
    int n  = sizeof(arr)/sizeof(arr[0]);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it = mp.begin();it != mp.end();it++){
        cout<<it->first<<" occurs "<<it->second<<" times"<<endl;
    }
}