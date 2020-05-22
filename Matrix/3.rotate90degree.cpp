// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

//Inplace Transpose of Matrix Time O(R*C) | Space O(1)
void transpose(vector<vector<int>> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < arr[i].size(); j++)
            swap(arr[i][j], arr[j][i]);
    }
}

// Inpace rotation Time O(R*C) | Space O(1)
void rotate90CCW(vector<vector<int>> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
    }
}

void rotate90CW(vector<vector<int>> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            swap(arr[i][low], arr[i][high]);
            low++;
            high--;
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
            for (int j = 0; j < N; j++)
            {
                int temp;
                cin >> temp;
                mat[i].push_back(temp);
            }
        }
        transpose(mat);
        rotate90CCW(mat);
        //rotate90CW(mat);

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}