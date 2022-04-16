#include <iostream>
using namespace std;

void selection_sort(int arr[], int size);

int main()
{

    int arr[] = {70, 60, 30, 20, 10, 50, 40, 90, 80, 100};
    ::selection_sort(arr, 10);
    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        swap(arr[min], arr[i]);
    }
}
