// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

int bSearch(vector<int> &arr, int l, int r, int x)
{
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == x)
        return mid;
    else if (x > arr[mid])
        bSearch(arr, mid + 1, r, x);
    else
        bSearch(arr, l, mid - 1, x);
}

int findOccurances(vector<int> &arr, int n, int x)
{
    int idx = bSearch(arr, 0, n - 1, x);
    if (idx == -1)
        return 0;
    int l = idx - 1;
    int sum = 1;
    while (l >= 0 && arr[l] == x)
    {
        sum++;
        l--;
    }
    int r = idx + 1;
    while (r <= n - 1 && arr[r] == x)
    {
        sum++;
        r++;
    }
    return sum;
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
        cout << findOccurances(A, N, X) << "\n";
    }
    return 0;
}