#include<iostream>
using namespace std;
void countPrint(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    countPrint(n-1);
}
int main(){
    int n =4;
    countPrint(n);
}