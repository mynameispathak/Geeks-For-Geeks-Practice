//Find the units of water that can be trapped betwwen the blocks.
//the elements of array represents the height of blocks.

#include <bits/stdc++.h>
using namespace std;

// Time O(n) | Space O(1)
int trappedWater(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    int LMax = 0, RMax = 0;
    int low = 0, high = n - 1;

    while (low <= high)
    {
        if (arr[low] < arr[high])
        {
            if (arr[low] > LMax)
                LMax = arr[low];
            else
                sum += LMax - arr[low];
            low++;
        }

        else
        {
            if (arr[high] > RMax)
                RMax = arr[high];
            else
                sum += RMax - arr[high];
            high--;
        }
    }
    return sum;
}

int main()
{
    vector<int> A = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int qty = trappedWater(A);
    cout << "The quantity of water trapped = " << qty;
}