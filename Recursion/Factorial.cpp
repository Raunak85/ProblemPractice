#include<iostream>
using namespace std;
int Factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    int fact = Factorial(n-1);
    int result = fact*n;
    return result;
}
int main(){
    int n = 4;
    cout<<Factorial(n);
}