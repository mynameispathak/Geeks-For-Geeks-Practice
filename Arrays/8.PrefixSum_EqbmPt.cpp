// Equilibrium Point : Sum of Elements before it = Sum of Elements After it.

#include <bits/stdc++.h>
using namespace std;
// Time O(n)
vector<int> prefix_Sum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    return prefixSum;
}

// prefixSum method | Time O(n) if prefixSum array is computed beforehand.
//                  | Space O(n) due to extra space for prefixSum array.
string eqbmPt(vector<int> &arr)
{
    int sumL, sumR, n = arr.size();
    vector<int> prefixSum = prefix_Sum(arr);
    if (prefixSum[n - 1] - prefixSum[0] == 0 || prefixSum[n - 2] == 0)
        return "Yes";

    for (int i = 1; i < n - 1; i++)
    {
        if (prefixSum[i - 1] == (prefixSum[n - 1] - prefixSum[i]))
            return "Yes";
    }
    return "No";
}

int main()
{
    int a, b;
    vector<int> A = {3, 4, 8, -9, 20, 6};
    cout << "Equilibrium Point Exists? : " << eqbmPt(A) << endl;
}