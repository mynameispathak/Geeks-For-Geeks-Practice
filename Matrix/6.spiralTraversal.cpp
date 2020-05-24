// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

void spiralTraverse(vector<vector<int>> &arr, int m, int n)
{
    int k = 0, l = 0;
    while (k < m && l < n)
    {
        for (int i = l; i < n; ++i)
            cout << arr[k][i] << " ";
        k++;
        for (int i = k; i < m; ++i)
            cout << arr[i][n - 1] << " ";
        n--;
        if (k < m)
        {
            for (int i = n - 1; i >= l; --i)
                cout << arr[m - 1][i] << " ";
            m--;
        }
        if (l < n)
        {
            for (int i = m - 1; i >= k; --i)
                cout << arr[i][l] << " ";
            l++;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int M, N;
        cin >> M >> N;
        vector<vector<int>> mat(M);
        for (int i = 0; i < M; i++)
        {
            mat[i].resize(N);
            for (int j = 0; j < N; j++)
            {
                cin >> mat[i][j];
            }
        }
        spiralTraverse(mat, M, N);
        cout << "\n";
    }
    return 0;
}