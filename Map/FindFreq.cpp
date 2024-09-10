#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    string str = "aabbffccc";
    unordered_map<char,int> freq;
    for(int i=0;i<str.size();i++){
        freq[str[i]]++;
    }
    unordered_map<char,int> :: iterator it;
    for(it=freq.begin(); it != freq.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}