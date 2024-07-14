// #include <iostream>
// using namespace std;

// char maxOccuringChar(string s)
// {
//     char c;
//     int max = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         int count = 0;
//         for (int j = 0; j < s.length(); j++)
//         {
//             if (s[i] == s[j])
//             {
//                 count++;
//             }
//         }
//         if (count > max)
//         {
//             c = s[i];
//             max = count;
//         }
//     }
//     return c;
// }

// int main()
// {
//     string s = "raa";
//     cout<<maxOccuringChar(s);
// }

                // optimize solution to find occurence;
#include<iostream>
using namespace std;

char MaxOccurenceChar(string s){
    int arr[256] = {0};
    int max = 0;
    char result;

    for(int i=0;i<s.size();i++){
        arr[s[i]]++;
        // if(arr[s[i]]>max){
        //     max = arr[s[i]];
        //     result = s[i];
        // }
    }
    for(int i=0;i<s.size();i++){
     
        if(arr[s[i]] > max){
            max = arr[s[i]];
            result = s[i];
        }
    }
    
    return result;
}

int main(){
    string s="ruannrakk";
    cout<<MaxOccurenceChar(s);

}