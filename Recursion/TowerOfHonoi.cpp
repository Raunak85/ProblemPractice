#include<iostream>
using namespace std;

void toh(int n,char s_rod,char d_rod,char a_rod){
    if(n == 1){
        cout<<"Move dist 1 rod "<<s_rod<<" to rod "<<d_rod<<endl;
        return;
    }
    toh(n-1,s_rod,a_rod,d_rod);
    cout<<"Move dist "<<n<<" from rod "<<s_rod<<" to rod "<<d_rod<<endl;
    toh(n-1,a_rod,d_rod,s_rod);
}

int main(){
    int n=3;
    toh(n,'A','C','B');

}