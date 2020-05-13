//Find the units of water that can be trapped betwwen the blocks.
//the elements of array represents the height of blocks.

#include <bits/stdc++.h>
using namespace std;

// Time O(n) | Space O(n)
int trappedWater(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    int LMax[n], RMax[n];

    LMax[0] = arr[0];
    for (int i = 1; i < n; i++)
        LMax[i] = max(LMax[i - 1], arr[i]);

    RMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        RMax[i] = max(RMax[i + 1], arr[i]);

    for (int i = 0; i < n; i++)
    {
        sum += min(LMax[i], RMax[i]) - arr[i];
    }
    return sum;
}

int main()
{
    vector<int> A = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int qty = trappedWater(A);
    cout << "The quantity of water trapped = " << qty;
}