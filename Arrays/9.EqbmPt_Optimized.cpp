// Equilibrium Point : Sum of Elements before it = Sum of Elements After it.

#include <bits/stdc++.h>
using namespace std;

// Time O(n) | Space O(1) : Most Optimized Solution of Equilibrium Point
string eqbmPt(vector<int> &arr)
{
    int sumL = 0, sum = 0, n = arr.size();
    string str;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (sumL == sum - arr[i])
            return "Yes";
        sumL += arr[i];
        sum -= arr[i];
    }
    return "No";
}

int main()
{
    int a, b;
    vector<int> A = {3, 4, 8, -9, 20, 6};
    cout << "Equilibrium Point Exists? : " << eqbmPt(A) << endl;
}