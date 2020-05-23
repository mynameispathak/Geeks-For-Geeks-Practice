// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

bool searchSortedRC(vector<vector<int>> &arr, int n, int m, int x)
{
    int startR = 0, startC = m - 1;
    while (startR <= n - 1 && startC >= 0)
    {
        if (arr[startR][startC] == x)
            return true;
        else if (arr[startR][startC] < x)
            startC--;
        else
            startR++;
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, X;
        cin >> N >> M;
        cin >> X;
        vector<vector<int>> mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
            {
                int temp;
                cin >> temp;
                mat[i].push_back(temp);
            }
        cout << searchSortedRC(mat, N, M, X) << "\n";
    }
    return 0;
}