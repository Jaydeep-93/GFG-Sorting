#include <iostream>
using namespace std;

void cycle_sort(int arr[], int size);

int main()
{
    int arr[] = {20, 40, 50, 10, 30, 30};
    int size = 6;
    ::cycle_sort(arr, size);

    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
}

void cycle_sort(int arr[], int size)
{
    for (int cs = 0; cs < size - 1; cs++)
    {
        int pos = -1;
        do
        {
            pos = cs;
            for (int i = cs + 1; i < size; i++)
            {
                if (arr[i] <= arr[cs])
                {
                    pos++;
                    for (int i = 0; i < size; i++)
                        cout << arr[i] << " ";
                    cout << endl;
                }
            }
            cout << "cs : " << cs << " pos : " << pos << endl;
            swap(arr[pos], arr[cs]);
        } while (arr[cs] != arr[pos]);
    }
}