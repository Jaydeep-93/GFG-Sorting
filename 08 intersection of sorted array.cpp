#include <iostream>
using namespace std;

void intersection(int a[], int n1, int b[], int n2);

int main() {
    int a[] = {3, 5, 10, 10, 15, 15, 20};
    int b[] = {5, 10, 10, 10, 15, 30};

    ::intersection(a, 7, b, 6);
}

void intersection(int a[], int n1, int b[], int n2) {
    int aptr = 0;
    int bptr = 0;
    while (aptr < n1 && bptr < n2) {
        if (aptr > 0 && (a[aptr] == b[bptr]) && (a[aptr] != a[aptr - 1])) {
            cout << a[aptr] << " ";
            aptr++;
            bptr++;
        }
        else if (a[aptr] < b[bptr]) {
            aptr++;
        } else { // a[aptr] > b[bptr]
            bptr++;
        }
    }
    cout << endl;
}