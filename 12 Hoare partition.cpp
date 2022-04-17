#include <iostream>
using namespace std;

int partition(int arr[], int low, int high);

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};

    int index = ::partition(arr, 0, 8);
    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
    cout << "Index : " << index << endl;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);
        do {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}