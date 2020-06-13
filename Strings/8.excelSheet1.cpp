// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

void columnName(int n)
{
    if (n > 0)
    {
        if (n <= 26)
            cout << (char)(n + 64);
        else
        {
            if (n % 26 == 0)
            {
                cout << char(((n - 26) / 26) + 64);
            }
            else
                cout << char((n / 26) + 64);
            if (n % 26 == 0)
                columnName(26);
            else
                columnName(n % 26);
        }
    }
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
        columnName(N);
        cout << "\n";
    }
    return 0;
}