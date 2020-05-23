// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

int searchSortedRC(vector<vector<int>> &arr, int n, int m, int x)
{
    int startR = 0, startC = m - 1;
    while (startR < n && startC >= 0)
    {
        if (arr[startR][startC] == x)
            return 1;
        else if (arr[startR][startC] > x)
            startC--;
        else
            startR++;
    }
    return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, X;
        cin >> N >> M;
        vector<vector<int>> mat(N);
        for (int i = 0; i < N; i++)
        {
            mat[i].resize(M);
            for (int j = 0; j < M; j++)
            {
                cin >> mat[i][j];
            }
        }
        cin >> X;
        cout << searchSortedRC(mat, N, M, X);
    }
    return 0;
}