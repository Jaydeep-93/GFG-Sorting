#include <iostream>
using namespace std;

void unionArray(int a[], int n1, int b[], int n2);
int next_distinct(int arr[], int size, int ele);

int main()
{
    int a[] = {2, 2, 3, 5, 8, 8, 10, 10, 15, 15};
    int b[] = {2, 2, 8, 9, 10, 10, 15, 15, 15, 15, 15};

    ::unionArray(a, 9, b, 11);
}

void unionArray(int a[], int n1, int b[], int n2)
{
    int aptr = 0;
    int bptr = 0;
    while (aptr < n1 && bptr < n2)
    {
        if (a[aptr] == b[bptr])
        {
            cout << a[aptr] << " ";
            aptr = next_distinct(a, n1, a[aptr]);
            bptr = next_distinct(b, n2, b[bptr]);
        }
        else if (a[aptr] < b[bptr])
        {
            cout << a[aptr] << " ";
            aptr = next_distinct(a, n1, a[aptr]);
        }
        else
        {
            cout << b[bptr++] << " ";
            bptr = next_distinct(b, n2, b[bptr]);
        }
    }
    while (aptr < n1)
    {
        cout << a[aptr] << " ";
        aptr = next_distinct(a, n1, a[aptr]);
    }
    while (bptr < n2)
    {
        cout << b[bptr++] << " ";
        bptr = next_distinct(b, n2, b[bptr]);
    }
    cout << endl;
}

int next_distinct(int arr[], int size, int ele)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
            index = i + 1;
    }
    return index;
}