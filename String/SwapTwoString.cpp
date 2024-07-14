#include<iostream>
using namespace std;

void SwapTwoString(string &s1,string &s2){
    
    string temp = s1;
    s1 = s2;
    s2 = temp;
}

int main(){
    string s1="Raunak";
    string s2="kumar";
    SwapTwoString(s1,s2);
    cout<<"s1 = "<<s1<<"s2 = "<<s2;
}