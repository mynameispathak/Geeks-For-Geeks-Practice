// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

char firstDup(string &s)
{
    int H[26] = {0};
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        H[s[i] - 97] += 1;
        if (H[s[i] - 97] > 1)
            break;
    }
    return s[i];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string str;
        //cin.ignore();
        getline(cin, str);
        char res = firstDup(str);
        if (res >= 97)
            cout << res;
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}