// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char *);

int main()
{

    char str[100];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        //string str;
        scanf("%s", str);
        cout << getMaxOccuringChar(str) << endl;
    }
} // } Driver Code Ends

// Function to get maximum occuring
// character in given string str
char getMaxOccuringChar(char *str)
{
    // Your code here
    int H[26] = {0};
    int i;
    //cout << "**" << sizeof(*str) << "\n";
    for (i = 0; str[i] != '\0'; i++)
    {
        H[str[i] - 'a']++;
    }
    cout << "i = " << i << "\n";
    int max = H[0], idx = 0;
    int j;
    for (j = 1; j < 26; j++)
    {
        if (H[j] > max)
        {
            max = H[j];
            idx = j;
        }
    }
    return idx + 'a';
}
