#include <iostream>
using namespace std;

void qSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

int main()
{

    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    ::qSort(arr, 0, 6);
    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
}

void qSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int parti = ::partition(arr, low, high);
        ::qSort(arr, low, parti - 1);
        ::qSort(arr, parti + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int index = low - 1;
    int pivot = arr[high];

    for (int j = low; j <= high; j++)
    {
        if (arr[j] < pivot)
        {
            index++;
            ::swap(arr[index], arr[j]);
        }
    }
    swap(arr[++index], arr[high]);
    return index;
}