// All elements occur even number of times only one element occurs odd number of times.
// Find the 1 number occuring odd number of times.

#include <iostream>
using namespace std;

// Using Bitwise XOR (^) | Time O(n)
int oddOccurance(long int arr[], int n)
{
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        odd = odd ^ arr[i];
    }
    return odd;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        long int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << oddOccurance(A, N) << endl;
    }
    return 0;
}