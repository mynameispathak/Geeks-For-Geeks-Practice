#include <bits\stdc++.h>
using namespace std;

bool keypair(vector<int> A, int N, int X)
{
    // Your code goes here
    sort(A.begin(), A.end());
    int l = 0, h = N - 1;
    while (l > h)
    {
        if (A[l] + A[h] == X)
            return true;
        else if (A[l] + A[h] > X)
        {
            h--;
        }
        else
        {
            l++;
        }
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, sum;
        cin >> n >> sum;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << (keypair(a, n, sum) ? "Yes" : "No") << endl;
    }
}