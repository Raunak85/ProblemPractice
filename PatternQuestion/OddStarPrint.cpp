#include<iostream>
using namespace std;

int main(){
    int n=5;
    int s;
    for(int i=0;i<=n;i++){
        for(s=0;s<n-i;s++){
            cout<<"  ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}   