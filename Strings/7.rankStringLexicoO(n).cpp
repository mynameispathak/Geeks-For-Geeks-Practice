// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;
#define MAX_CHAR 256

int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

void prefixSum(int *count, string s)
{
    for (int i = 0; s[i]; i++)
        count[s[i]]++;
    for (int i = 0; i < MAX_CHAR - 1; i++)
    {
        count[i + 1] += count[i];
    }
}

void updateCount(int *count, char ch)
{
    for (int i = ch; i < MAX_CHAR; i++)
    {
        count[i]--;
    }
}

int findRank(string str)
{
    int leng = str.length();
    int mul = fact(leng);
    int rank = 1, occur[256] = {0};
    int count[MAX_CHAR] = {0};

    prefixSum(count, str);

    for (int i = 0; i < leng; i++)
    {
        occur[str[i]]++;

        mul /= leng - i;

        //countRight = findSmallerR(str, i, leng-1);

        rank += count[str[i] - 1] * mul;

        updateCount(count, str[i]);
    }
    for (int i = 0; i < 256; i++)
    {
        if (occur[i] > 1)
            return 0;
    }
    return rank % 1000003;
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
        cout << findRank(str) % 1000003 << "\n";
    }
    return 0;
}