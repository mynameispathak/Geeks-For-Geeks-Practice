#include <bits/stdc++.h>
using namespace std;

// Time O(n) | Space O(1)
pair<int, int> oddOccurance(int arr[], int N)
{
    int xor2 = arr[0];
    for (int i = 1; i < N; i++)
        xor2 = xor2 ^ arr[i];
    int setBitNo;
    setBitNo = xor2 & ~(xor2 - 1);
    int x = 0, y = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] & setBitNo)
            x = x ^ arr[i];

        else
            y = y ^ arr[i];
    }
    return std::make_pair(x, y);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        pair<int, int> p = oddOccurance(A, N);
        if (p.first > p.second)
            cout << p.first << " " << p.second << endl;
        else
            cout << p.second << " " << p.first << endl;
    }
    return 0;
}