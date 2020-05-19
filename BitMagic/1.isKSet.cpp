// Check if the kth bit from the right is set or not.
// Solution using LShift and Bitwise AND operators.

#include <bits/stdc++.h>
using namespace std;

bool isKSet(int a, int l)
{
    if ((a & (1 << (l - 1))) != 0)
        return true;
    else
        return false;
}

int main()
{
    int x, k;
    cout << "Enter a and k : ";
    cin >> x >> k;
    cout << "The " << k << "th bit is set : " << boolalpha << isKSet(x, k); // boolalpha flag is set to used to print bool values as
    return 0;                                                               // true/false instead of 1/0
}