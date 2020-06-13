// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;
#define MAX_CHAR 256

int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int findSmallerR(string str, int low, int high)
{
    int countR = 0;
    for (int i = low + 1; i <= high; i++)
    {
        if (str[i] < str[low])
            ++countR;
    }
    return countR;
}

//Time O(n2)

int findRank(string str)
{
    int leng = str.length();
    int mul = fact(leng);
    int rank = 1, countRight;
    int occur[256] = {0};

    for (int i = 0; i < leng; ++i)
    {
        occur[str[i]]++;

        mul /= leng - i;

        countRight = findSmallerR(str, i, leng - 1);

        rank += countRight * mul;
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