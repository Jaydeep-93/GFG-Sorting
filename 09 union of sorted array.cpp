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
        if (aptr > 0 && a[aptr] == a[aptr - 1])
        {
            aptr++;
            continue;
        }
        else if (bptr > 0 && b[bptr] == b[bptr - 1])
        {
            bptr++;
            continue;
        }
        else if (a[aptr] == b[bptr])
        {
            cout << a[aptr] << " ";
            aptr++;
            bptr++;
        }
        else if (a[aptr] < b[bptr])
        {
            cout << a[aptr++] << " ";
        }
        else if (a[aptr] > b[bptr])
        {
            cout << b[bptr++] << " ";
        }
    }
    while (aptr < n1)
    {
        if (aptr > 0 && a[aptr] != a[aptr - 1])
            cout << a[aptr] << " ";
        aptr++;
    }
    while (bptr < n2)
    {
        if (bptr > 0 && b[bptr] != b[bptr - 1])
            cout << b[bptr++] << " ";
        bptr++;
    }
    cout << endl;
}

