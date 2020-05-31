// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int l, int r, int x)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return 1;
        else if (x > arr[mid])
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return -1;
}

int bSearchRecursion(vector<int> &arr, int l, int r, int x)
{
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == x)
        return 1;
    else if (x > arr[mid])
        bSearchRecursion(arr, mid + 1, r, x);
    else
        bSearchRecursion(arr, l, mid - 1, x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << binarySearch(A, 0, N - 1, X) << "\n";
        cout << bSearchRecursion(A, 0, N - 1, X) << "\n";
    }
    return 0;
}