#include <bits/stdc++.h>
using namespace std;

int maxSumK(vector<int> &arr, int k)
{
    int n = arr.size();
    int windowSum = 0, maxSum, newWinSum;
    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    for (int i = 1; i <= n - k; i++)
    {
        newWinSum = windowSum - arr[i - 1] + arr[i + k - 1];
        windowSum = newWinSum;
        if (newWinSum > maxSum)
            maxSum = newWinSum;
    }
    return maxSum;
}

int main()
{
    int k;
    vector<int> A = {5, 2, -1, 0, 3};
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "Max sum of " << k << " integers = " << maxSumK(A, k);
}