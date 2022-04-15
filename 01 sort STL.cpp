#include <iostream>
using namespace std ; 
#include <algorithm>

int main() {

    int arr[] = {10, 20, 5, 7, 40, 55, 32, 9};

    sort(arr, arr + 8); 

    for (int ele: arr)
        cout << ele << " " << endl;
    cout << endl; 
}