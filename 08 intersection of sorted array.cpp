#include <iostream>
using namespace std;

void intersection(int a[], int n1, int b[], int n2);
int next_distinct(int arr[], int size, int ele);

int main() {
    int a[] = {3, 3, 5, 10, 10, 15, 15, 20, 20, 20};
    int b[] = {3, 3, 5, 10, 10, 10, 15, 18, 20, 20};

    ::intersection(a, 10, b, 10);
}

void intersection(int a[], int n1, int b[], int n2) {
    int aptr = 0;
    int bptr = 0;
    while (aptr < n1 && bptr < n2) {
        if (a[aptr] == b[bptr])
        {
            cout << a[aptr] << " ";
            aptr = ::next_distinct(a, n1, a[aptr]);
            bptr = ::next_distinct(b, n2, b[bptr]);
        }
        else if (a[aptr] < b[bptr]) {
            aptr++;
        } else { // a[aptr] > b[bptr]
            bptr++;
        }
    }
    cout << endl;
}

int next_distinct(int arr[], int size, int ele)
{
    int last = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
            last = i + 1;
    }
    return last;
}