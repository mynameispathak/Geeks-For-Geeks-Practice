#include <bits/stdc++.h>
using namespace std;

// Time O(n)
int sum_ab(vector<int> &arr, int x, int y)
{
    int n = arr.size();
    int sum = 0;
    for (int i = x; i <= y; i++)
    {
        sum += arr[i];
    }
    return sum;
}

vector<int> prefix_Sum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    return prefixSum;
}

// prefixSum method | Time O(1)
int getSum(vector<int> &arr, int x, int y)
{
    int sum;
    vector<int> prefixSum = prefix_Sum(arr);

    if (x == 0)
        sum = prefixSum[y];
    else
        sum = prefixSum[y] - prefixSum[x - 1];

    return sum;
}

int main()
{
    int a, b;
    vector<int> A = {2, 8, 3, 9, 6, 5, 4};
    cout << "Enter the two indices : ";
    cin >> a >> b;
    //cout << "Sum(" << a << ", " << b << ") = " << sum_ab(A, a, b) << endl;
    cout << "getSum(" << a << ", " << b << ") = " << getSum(A, a, b);
}