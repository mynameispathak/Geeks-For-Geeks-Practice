// Submitted by Aniket Pathak
// mynameispathak
// Power set of a string without Lexicographic order

#include <iostream>
using namespace std;

int powerSet(char arr[], int n)
{
    int count = (1 << n);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                cout << arr[j];
        }
        cout << "\n";
    }
    return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        char A[N];
        //for (int i = 0; i < N; i++)
        //  cin >> A[i];
        cin >> A;
        powerSet(A, N);
    }

    return 0;
}