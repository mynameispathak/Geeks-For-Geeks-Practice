// Check if the given number is power of 2 or not
// Solution using bitwise operator &

#include <bits/stdc++.h>
using namespace std;

bool isPow2(int a)
{
    if (!(a & (a - 1)))
        return true;
    else
        return false;
}

int main()
{
    int x;
    cin >> x;
    cout << "The number " << x << " is power of 2 : " << boolalpha << isPow2(x);
}