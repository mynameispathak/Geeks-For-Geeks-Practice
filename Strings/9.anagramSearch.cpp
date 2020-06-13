// Submitted by Aniket Pathak
// mynameispathak
#include <bits/stdc++.h>
using namespace std;
#define MAX 256

bool compare(char arr1[], char arr2[])
{
    for (int i = 0; i < MAX; i++)
        if (arr1[i] != arr2[i])
            return false;
    return true;
}

//Time: O(n)

int anagramSearch(string &s, string &p)
{
    int M = p.length(), N = s.length();

    char countP[MAX] = {0}, countTW[MAX] = {0};
    for (int i = 0; i < M; i++)
    {
        (countP[p[i]])++;
        (countTW[s[i]])++;
    }

    int anagCount = 0;
    for (int i = M; i < N; i++)
    {
        if (compare(countP, countTW))
            anagCount++;

        (countTW[s[i]])++;

        countTW[s[i - M]]--;
    }

    if (compare(countP, countTW))
        anagCount++;

    return anagCount;
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
        string str, pat;
        cin >> str >> pat;
        cout << anagramSearch(str, pat) << "\n";
    }
    return 0;
}