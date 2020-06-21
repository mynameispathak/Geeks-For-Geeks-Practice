#include <bits\stdc++.h>
using namespace std;

bool keypair(vector<int> A, int N, int X)
{
    // Your code goes here
    unordered_set<int> s;
    for (int i = 0; i < N; i++)
    {
        if (s.find(X - A[i]) != s.end())
        {
            return true;
        }
        s.insert(A[i]);
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