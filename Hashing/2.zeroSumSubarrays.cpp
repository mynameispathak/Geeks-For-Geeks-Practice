// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

int zeroSum(vector<int> &arr, int n)
{
    unordered_map<int, int> m;
    int sum = 0, count = 0;
    m[0]++;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (m.find(sum) != m.end())
            count += m[sum];

        m[sum]++;
    }
    return count;
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
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << zeroSum(A, N) << "\n";
    }
    return 0;
}