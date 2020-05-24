// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

void boundaryTraverse(vector<vector<int>> &arr, int n)
{
    int k = 0, l = n - 1;
    for (int i = 0; i < n; i++)
        cout << arr[k][i] << " ";
    k++;
    for (int i = k; i < n; i++)
        cout << arr[i][n - 1] << " ";
    l--;
    for (int i = l; i >= 0; i--)
        cout << arr[n - 1][i] << " ";
    for (int i = n - 2; i > 0; i--)
        cout << arr[i][0];
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<vector<int>> mat(N);
        for (int i = 0; i < N; i++)
        {
            mat[i].resize(N);
            for (int j = 0; j < N; j++)
            {
                cin >> mat[i][j];
            }
        }
        boundaryTraverse(mat, N);
    }
    return 0;
}