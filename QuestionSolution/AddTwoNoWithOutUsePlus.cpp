#include<iostream>
using namespace std;
int add(int a,int b){
    while(b != 0){
        a++;
        b--;
    }
    return a;
}

int main(){
    int a = 0,b = 0;
    cout<<add(a,b);
}