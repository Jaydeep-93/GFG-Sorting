#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size);

int main()
{

    int arr[] = {70, 60, 30, 20, 10, 50, 40, 90, 80, 100};
    // int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    ::insertion_sort(arr, 10);
    for (int ele : arr)
        cout << ele << ", ";
    cout << endl;
}

void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
