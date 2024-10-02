#include<bits/stdc++.h>
using namespace std;

string move(string str){
    int n = str.size();
    int k = 0;
    for(int i=0;i<n;i++){
        if(str[i] == '#'){
            str.insert(str.begin()+(k++),'#');
            str.erase(str.begin()+i+1);
        }
    }
    return str;
}

int main(){
    string str = "Move#Hash#to#Front";
    cout<<move(str);
}