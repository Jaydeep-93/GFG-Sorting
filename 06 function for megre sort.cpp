#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high);

int main()
{
    int arr[] = {10, 15, 20, 11, 30};
    int low = 0;
    int mid = 2;
    int high = 4;

    merge(arr, low, mid, high);

    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
}

void merge(int arr[], int low, int mid, int high)
{

    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];

    int aptr = 0;
    int bptr = 0;
    int res = low;
    while (aptr < n1 && bptr < n2)
    {
        if (left[aptr] < right[bptr])
            arr[res++] = left[aptr++];
        else if (left[aptr] > right[bptr])
            arr[res++] = right[bptr++];
        else
        {
            arr[res++] = left[aptr++];
            arr[res++] = right[bptr++];
        }
    }
    while (aptr < n1)
        arr[res++] = left[aptr++];
    while (bptr < n2)
        arr[res++] = right[bptr++];
}