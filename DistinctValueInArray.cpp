#include <iostream>
using namespace std;

void findDistinctValues(int arr[], int size) {
    int temp[size];
    int distinctCount = 0;

    for (int i = 0; i < size; ++i) {
        bool isDistinct = true;
        for (int j = 0; j < distinctCount; ++j) {
            if (arr[i] == temp[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) {
            temp[distinctCount] = arr[i];
            ++distinctCount;
        }
    }

    cout << "Distinct values: ";
    for (int i = 0; i < distinctCount; ++i) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {1,2, 3, 4, 4, 5,1,3};
    int size = sizeof(array) / sizeof(array[0]);
    
    findDistinctValues(array, size);

    return 0;
}
