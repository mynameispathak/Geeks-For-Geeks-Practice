// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

char firstNonDup(string &s, int n)
{
    int H[26] = {0};
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        H[s[i] - 97] += 1;
    }
    int j;
    for (j = 0; s[j] != '\0'; j++)
    {
        if (H[s[j] - 97] == 1)
            break;
    }
    return s[j];
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
        string str;
        cin >> str;
        char res = firstNonDup(str, N);
        if (res >= 97)
            cout << res;
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}