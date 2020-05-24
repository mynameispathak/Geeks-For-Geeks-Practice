#include <bits/stdc++.h>
using namespace std;

void display(vector<int> arr)
{
    for (auto i = arr.begin(); i != arr.end(); i++)
        cout << *i << " ";
    cout << endl;
}

int maxProfit(vector<int> &arr)
{
    int n = arr.size();
    int profitm = 0;
    vector<int> LocMin, LocMax;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] < arr[i + 1])
                LocMin.push_back(arr[i]);
            else if (arr[i] > arr[i + 1])
                LocMax.push_back(arr[i]);
        }
        else if (i == n - 1)
        {
            if (arr[i] < arr[i - 1])
                LocMin.push_back(arr[i]);
            else if (arr[i] > arr[i - 1])
                LocMax.push_back(arr[i]);
        }
        else
        {
            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
                LocMin.push_back(arr[i]);
            else if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                LocMax.push_back(arr[i]);
        }
    }
    display(LocMin);
    display(LocMax);
    int m = min(LocMin.size(), LocMax.size());
    for (int i = 0; i < m; i++)
        profitm += LocMax[i] - LocMin[i];

    return profitm;
}

int main()
{
    vector<int> A = {1, 5, 3, 8, 12};
    int mprofit = maxProfit(A);
    cout << "MaxProfit = " << mprofit;
}