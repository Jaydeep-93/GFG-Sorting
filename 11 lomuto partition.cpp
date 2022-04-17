#include <iostream>
using namespace std;

int partition(int arr[], int low, int high, int pivotIndex);

int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};

    int index = ::partition(arr, 0, 6,5);
    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
    cout << "Index : " << index << endl;
}

int partition(int arr[], int low, int high, int pivotIndex)
{
    int index = low - 1;
    swap(arr[pivotIndex], arr[high]); 
    int pivot = arr[high];

    for (int j = low; j <= high; j++) {
        if (arr[j] < pivot) {
            index++;
            ::swap(arr[index], arr[j]);
        }
    }
    swap(arr[++index], arr[high]);
    return index;
}