// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

//Inplace Transpose of Matrix Time O(n2) | Space O(1)
void transpose(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr[i].size(); j++)
            swap(arr[i][j], arr[j][i]);
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
            for (int j = 0; j < N; j++)
            {
                int temp;
                cin >> temp;
                mat[i].push_back(temp);
            }
        }
        transpose(mat);
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}