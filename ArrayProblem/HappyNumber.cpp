// Program to determine whether a given number is a happy number

// For example, 32 is a happy number as the process yields 1 as follows
// 32 = 3*3 + 2*2 = 13 
// 13 = 1*1 + 3*3 = 10
// 10 = 1*1 + 0*0 = 1 ------> means 32 is happy no

// 32 + 22 = 13
// 12 + 32 = 10
// 12 + 02 = 1

// The first few unhappy numbers are 
// 2, 3, 4, 5, 6, 8, 9, 11, 12, 14, 15, 16, 17, 18, 20

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check number is happy no or not"<<endl;
    cin>>n;        // 32
    int temp = n;   // 32
    while(temp>9){     //temp = 32, 13, 10
        int z = temp;   // z= 32, 13, 10
        int sum = 0;  //sum = 0
        while(z > 0){   // z = 32 , 3, 13, 10, 1
            int rem = z%10;  // rem = 2 , 3, 3, 1, 0, 1
            sum += (rem*rem); // sum = 4, 13 , 9, 10, 0, 1
            z = z/10;   // z = 3, 1, 0, 1, 0
        }
        temp = sum; // 13,10,1
    }
    if(temp == 1){
        cout<<n<<" is happy no"<<endl;
    }else{
        cout<<n<<" is not happy no"<<endl;
    }

}