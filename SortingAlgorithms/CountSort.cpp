#include <iostream>
using namespace std;
int main()
{
    int arr[] = {9,7,2,7,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    int freqArray[maxElement + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        int indexFreq = arr[i];
        freqArray[indexFreq]++;
    }
    int SortArray[n];
    int k = 0;
    for (int i = 0; i < maxElement + 1; i++)
    {
        int val = freqArray[i];
        while (val > 0)
        {
            if (val > 0)
            {
                SortArray[k++] = i;
                val--;
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<SortArray[i]<<" ";
    }
}