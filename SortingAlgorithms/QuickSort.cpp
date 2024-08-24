// #include<iostream>
// using namespace std;

// int conquir(int arr[],int si,int ei){
//     int pivotElement = arr[si];
//     int count = 0;
//     for(int i=si+1;i<=ei;i++){
//         if(arr[i] <= pivotElement){
//             count++;
//         }
//     }
//     int pivotIndex = (si+count);
//     swap(arr[si],arr[pivotIndex]);
//     int i = si,j=ei;

//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i] <= pivotElement) i++;
//         while(arr[j] > pivotElement) j--;
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i],arr[j]);
//         }
//     }
   
//     return pivotIndex;

// }

// void divide(int arr[],int si,int ei){
//     if(si>=ei){
//         return;
//     }
//     int pivotIndex = conquir(arr,si,ei);
//     divide(arr,si,pivotIndex-1);
//     divide(arr,pivotIndex+1,ei);
// }

// void quickSort(int arr[],int n){
//     divide(arr,0,n-1);
// }

// int main(){
//     int arr[] = {4,2,6,1,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     quickSort(arr,n);
//     for (int i : arr){
//         cout<<i<<" ";
//     }
// }

            // method 2

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int pivot(vector<int>& arr,int si,int ei){
        int pivotElement = arr[si];
        int i=si,j=ei;
        while(i<=j){
            while(arr[i] <= pivotElement) i++;
            while(arr[j] > pivotElement) j--;
            if(i<j && j>i){
                swap(arr[i] , arr[j]);
                i++,j--;
            }
        }
        swap(arr[j] , arr[si]);
        return j;
    }
    void divide(vector<int>& nums,int si,int ei){
        if(si>=ei){
            return;
        }
        int pivotIndex = pivot(nums,si,ei);
        divide(nums,si,pivotIndex-1);
        divide(nums,pivotIndex+1,ei);
    }

    vector<int> sortArray(vector<int>& nums) {
        divide(nums,0,nums.size()-1);
        return nums;
    }
};
int main(){
    Solution s1;
    vector<int> arr = {3,4,1,6,2};
    arr = s1.sortArray(arr);
    for(int i: arr){
        cout<<i<<" ";
    }

}