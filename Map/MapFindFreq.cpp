#include<iostream>
#include<map>
using namespace std;

int main(){
    string str = "aaabbbbeeeeffggg";
    map<char,int> freq;
    for(int i=0;i<str.size();i++){
        freq[str[i]]++;
    }
    for(auto it = freq.begin();it != freq.end();it++){
        cout<<it->first<<it->second;
    }
}