#include<iostream>
using namespace std;
int sub(int a,int b){
    int count = 0;
    while(a != b){
        a--;
        count++;
    }
    return count;
}
int main(){
    int a=0,b=0;
    int max;
    if(a>b){
        max = a;
        cout<<sub(max,b);
    }else{
        max = b;
        cout<<sub(max,a);
    }
    
}