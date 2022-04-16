#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size);

int main() {

    int arr[] = {70, 60, 30, 20, 10, 50, 40, 90, 80, 100};
    ::bubble_sort(arr, 10);
    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
}

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}