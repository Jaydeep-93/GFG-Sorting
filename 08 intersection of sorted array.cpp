#include <iostream>
using namespace std;

void intersection(int a[], int n1, int b[], int n2);

int main() {
    int a[] = {3, 3, 5, 10, 10, 15, 15, 20, 20, 20};
    int b[] = {3, 3, 5, 10, 10, 10, 15, 18, 20, 20};

    ::intersection(a, 10, b, 10);
}

void intersection(int a[], int n1, int b[], int n2) {
    int aptr = 0;
    int bptr = 0;
    while (aptr < n1 && bptr < n2) {
        if (aptr > 0 && a[aptr] == a[aptr-1])
            aptr++;
        if (bptr > 0 && b[bptr] == b[bptr-1])
            bptr++;
        if (a[aptr] == b[bptr])
        {
            cout << a[aptr] << " ";
            aptr++;
            bptr++;
        }
        else if (a[aptr] < b[bptr]) {
            aptr++;
        }
        else if (a[aptr] > b[bptr])
        {
            bptr++;
        }
    }
    cout << endl;
}
