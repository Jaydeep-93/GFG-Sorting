#include <iostream>
using namespace std;
#include <vector>

vector<int> merge_array(int arr[], int a, int brr[], int b);

int main() {
    int a[] = {10, 15, 20};
    int b[] = {5, 6, 6, 15};

    vector<int> res = merge_array(a, 3, b, 4);

    for (int ele : res)
        cout << ele << " ";
    cout << endl;
}

vector<int> merge_array(int arr[], int a, int brr[], int b) {
    vector<int> res;
    int aptr = 0;
    int bptr = 0;

    while (aptr < a && bptr < b) {
        if (arr[aptr] < brr[bptr])
            res.push_back(arr[aptr++]);
        else if (arr[aptr] > brr[bptr])
            res.push_back(brr[bptr++]);
        else {// arr[aptr] == brr[bptr]
            res.push_back(arr[aptr++]);
            res.push_back(brr[bptr++]);
        }
    }
    while (aptr < a) {
        res.push_back(arr[aptr++]);
    }
    while (bptr < b) {
        res.push_back(brr[bptr++]);
    }

    return res;
}