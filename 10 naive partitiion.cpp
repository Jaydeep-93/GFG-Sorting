#include <iostream>
using namespace std;

int partition(int arr[], int low, int high, int parti);

int main()
{
    int arr[] = {3, 8, 6, 12, 10, 7};
    int index = 5;

    index = ::partition(arr, 0, 5, 5);

    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
    cout << "Index : " << index << endl;
}

int partition(int arr[], int low, int high, int parti)
{
    int res[high - low + 1];

    int index = 0;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] < arr[parti])
            res[index++] = arr[i];
    }
    for (int i = low; i <= high; i++)
    {
        if (arr[i] == arr[parti])
            res[index++] = arr[i];
    }
    int result = index;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] > arr[parti])
            res[index++] = arr[i];
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = res[i];
    }
    return result;
}