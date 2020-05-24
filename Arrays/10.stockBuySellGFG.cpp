// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

void display(vector<int> arr)
{
    for (auto i = arr.begin(); i != arr.end(); i++)
        cout << *i << " ";
    cout << endl;
}

void maxProfit(vector<int> &arr, int n)
{
    int profitm = 0;
    vector<int> LocMin, LocMax;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] < arr[i + 1])
                LocMin.push_back(i);
            //else if (arr[i] > arr[i + 1])
            //  LocMax.push_back(i);
        }
        else if (i == n - 1)
        {
            if (arr[i] < arr[i - 1])
                LocMin.push_back(i);
            else if (arr[i] > arr[i - 1])
                LocMax.push_back(i);
        }
        else
        {
            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
                LocMin.push_back(i);
            else if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                LocMax.push_back(i);
        }
    }
    display(LocMin);
    display(LocMax);

    int m = min(LocMin.size(), LocMax.size());
    for (int i = 0; i < m; i++)
        cout << "(" << LocMin[i] << " " << LocMax[i] << ")"
             << " ";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        maxProfit(A, N);
        cout << endl;
    }
    return 0;
}