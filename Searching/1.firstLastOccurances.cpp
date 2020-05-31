// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

int first(vector<int> &arr, int l, int r, int x)
{
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == x && (arr[0] == x || arr[mid - 1] != x))
        return mid;
    else if (x > arr[mid])
        first(arr, mid + 1, r, x);
    else
        first(arr, l, mid - 1, x);
}

int last(vector<int> &arr, int l, int r, int x)
{
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == x && (arr[arr.size() - 1] == x || arr[mid + 1] != x))
        return mid;
    else if (x >= arr[mid])
        last(arr, mid + 1, r, x);
    else
        last(arr, l, mid - 1, x);
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
        cout << "First : " << first(A, 0, N - 1, X) << "\n";
        cout << "Last : " << last(A, 0, N - 1, X) << "\n";
    }
    return 0;
}