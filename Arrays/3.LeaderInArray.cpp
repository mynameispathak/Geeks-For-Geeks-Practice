// A number is said to be a Leader in an Array is there is no greater element in the right of it

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

stack<int> leader(vector<int> &arr)
{
    int n = arr.size();
    int max = arr[n - 1];
    stack<int> s;
    s.push(max);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            s.push(max);
            //cout << max << " ";
        }
    }
    return s;
}

void showStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}

int main()
{
    vector<int> A = {5, 3, 20, 15, 8, 3};

    stack<int> s1 = leader(A);
    cout << "The Leaders are : ";
    showStack(s1);
}