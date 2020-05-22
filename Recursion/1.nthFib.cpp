// Submitted by Aniket Pathak
// mynameispathak

#include <iostream>
using namespace std;
#define NIL -1
#define MAX 1000

long long int F[MAX];

void initialize()
{
    for (int i = 0; i < MAX; i++)
        F[i] = NIL;
}

long long int fib(long long int x)
{
    if (x <= 1)
    {
        F[x] = x;
        return x;
    }
    else
    {
        if (F[x - 2] == NIL)
            F[x - 2] = fib(x - 2);
        if (F[x - 1] == NIL)
            F[x - 1] == fib(x - 1);
        F[x] = F[x - 2] + F[x - 1];
        return (F[x - 2] + F[x - 1]) % 1000000007;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int N;
        cin >> N;
        initialize();
        /*cout << "Before : ";
        for (int i = 0; i < N + 1; i++)
            cout << F[i] << " ";
        cout << endl;*/
        cout << fib(N) << endl;
        /*cout << "After : ";
        for (int i = 0; i < N + 1; i++)
            cout << F[i] << " ";
        cout << endl;*/
    }
    return 0;
}