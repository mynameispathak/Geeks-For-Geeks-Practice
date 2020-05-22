#include <bits/stdc++.h>
using namespace std;

// Time O(n) | Space O(1)
vector<int> reverseArray(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
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
    vector<int> B = {1, 2, 3, 4, 5};

    reverseArray(A);
    display(A);
    reverseArray(B);
    display(B);
    return 0;
}