#include<iostream>
using namespace std;

bool isSubstring(string str, string part) {
    int stringLen = str.length();
    int partLen = part.length();
    for(int i = 0; i <= stringLen - partLen; i++) {
        if(str[i] == part[0]) {
            int j = 1;
            int m = i + 1;
            bool flag = true;
            while (j < partLen) {
                if(str[m] != part[j]) {
                    flag = false;
                    break;
                }
                j++;
                m++;
            }
            if(flag == true) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string str = "hello world";
    string part = "wr";
    if(isSubstring(str, part)) {
        cout << "yes";
    } else {
        cout << "no";
    }
}
