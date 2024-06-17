#include<iostream>
#include<string>

using namespace std;

int main(){
            // method1
    // string str;
    // cout<<"Enter String"<<endl;
    // // cin>>str;
    // getline(cin,str);
    // int size=str.length();
    // for(int i=0;i<size;i++){
    //     cout<<str[size-i];
    // }

    string str;
    string temp="";
    cout<<"Enter string"<<endl;
    getline(cin,str);
    int size=str.length();
    for(int i=size-1;i>=0;i--){
        char c=str[i];
        temp += c;
        
    }
    cout<<temp;

}