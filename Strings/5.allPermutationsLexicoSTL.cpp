// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

void allPermu(string &s)
{
    sort(s.begin(), s.end());

    do
    {
        cout << s << " ";
    } while (next_permutation(s.begin(), s.end()));
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
        allPermu(str);
        cout << "\n";
    }
    return 0;
}