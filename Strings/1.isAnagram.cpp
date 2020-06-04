// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

// Time O(n)

bool isAnagram(string &s1, string &s2)
{
    int H[26] = {0};

    if (s1.length() != s2.length())
        return false;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        H[s1[i] - 'a']++;
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        H[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (H[i] != 0)
            return false;
    }
    return true;
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
        //cin.ignore();
        string str1, str2;
        cin >> str1 >> str2;
        bool res = isAnagram(str1, str2);
        if (res == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}