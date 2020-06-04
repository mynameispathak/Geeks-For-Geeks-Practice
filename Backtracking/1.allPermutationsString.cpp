// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

void allPermu(string &s, int l, int h)
{
    if (l == h)
    {
        cout << s << " ";
        //return;
    }
    else
    {
        for (int i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            allPermu(s, l + 1, h);
            swap(s[l], s[i]);
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
        string str;
        cin >> str;
        int n = str.size();
        allPermu(str, 0, n - 1);
        cout << "\n";
    }
    return 0;
}