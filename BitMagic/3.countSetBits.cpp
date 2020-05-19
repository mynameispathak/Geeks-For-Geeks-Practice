// Count the number of set bits in the binary representation of a given number.

#include <bits/stdc++.h>
using namespace std;

// using modulus
int countSetBitsMod(int x)
{
    int count = 0;
    while (x != 0)
    {
        if (x % 2 == 1)
            count++;
        x /= 2;
    }
    return count;
}

// Using kth set bit from right approach | Time O(No_of_bits)
int countSetBits(int x)
{
    int count = 0;
    int size = (int)log2(x) + 1;
    for (int i = 1; i <= size; i++)
    {
        if ((x & (1 << (i - 1))) != 0)
            count++;
    }
    return count;
}

// Brian Karnighan Algorithm | Time O(No_of_set_bits)
int countSetBitsBK(int x)
{
    int count = 0;
    while (x > 0)
    {
        x = (x & (x - 1));
        count++;
    }
    return count;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << "No of set bits : \n";
        cout << "Using Modulus : " << countSetBitsMod(N) << endl;
        cout << "Using Kth set bit : " << countSetBits(N) << endl;
        cout << "Using Brian Karnighan Algo : " << countSetBits(N) << endl;
    }
    return 0;
}