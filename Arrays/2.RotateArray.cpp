#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> &arr, int l, int h)
{
    while (l < h)
    {
        swap(arr[l], arr[h]);
        l++;
        h--;
    }
}

vector<int> rotateArray(vector<int> &arr, int r)
{
    int n = arr.size();
    reverseArray(arr, 0, r - 1);
    reverseArray(arr, r, n - 1);
    reverseArray(arr, 0, n - 1);
}

void display(vector<int> arr)
{
    for (auto i = arr.begin(); i != arr.end(); i++)
        cout << *i << " ";
    cout << endl;
}

int main()
{
    vector<int> A = {1, 2, 3, 7, 8, 9};
    //vector<int> B = {1, 2, 3, 4, 5};
    int low = 0, high = A.size() - 1;
    int d = 2;
    rotateArray(A, d);
    display(A);
    return 0;
}