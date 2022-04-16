#include <iostream>
using namespace std;

void mergeSort(int arr[], int l, int r);
void merge(int arr[], int low, int mid, int high);

int main()
{
    int arr[] = {10, 5, 30, 15, 7};

    mergeSort(arr, 0, 4);

    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
}

void mergeSort(int arr[], int l, int r)
{
    if (r > l)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);

    }
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