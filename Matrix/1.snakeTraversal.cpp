// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

int snakeTraverse(int n, vector<vector<int>> &arr)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j] << " ";
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
                cout << arr[i][j] << " ";
        }
    }
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
            //mat[i].resize(N);
            for (int j = 0; j < N; j++)
            {
                int temp;
                cin >> temp;
                mat[i].push_back(temp);
                //cin >> mat[i][j];
            }
        }
        snakeTraverse(N, mat);
    }
    return 0;
}