#include <iostream>
using namespace std;

void seggregate(int arr[], int low, int high);

int main() {
    int arr[] = {13, -5, 10, 20, -20, -6};
    int lastIndex = 5;
    ::seggregate(arr, 0, lastIndex);
    for (int ele : arr)
        cout << ele << "  ";
    cout << endl;
}

void seggregate(int arr[], int low, int high) {
    int index = low - 1;
    int pivot = 0;

    for (int i = 0; i <= high; i++) {
        if (arr[i] < pivot) {
            index++;
            swap(arr[i], arr[index]);
        }
    }
}