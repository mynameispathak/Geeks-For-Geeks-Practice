//Find the units of water that can be trapped betwwen the blocks.
//the elements of array represents the height of blocks.

#include <bits/stdc++.h>
using namespace std;

int trappedWater(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        int LMax = arr[i];
        for (int j = 0; j < i; j++)
            LMax = max(LMax, arr[j]);
        int RMax = arr[i];
        for (int j = i + 1; j < n; j++)
            RMax = max(RMax, arr[j]);
        int L = min(LMax, RMax);
        sum += L - arr[i];
    }
    return sum;
}

int main()
{
    vector<int> A = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int qty = trappedWater(A);
    cout << "The quantity of water trapped = " << qty;
}