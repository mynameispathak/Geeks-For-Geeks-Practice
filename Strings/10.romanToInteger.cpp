// Submitted by Aniket Pathak
// mynameispathak

#include <bits/stdc++.h>
using namespace std;

// str given roman number string
// Returns decimal value of roman numaral

int value(char ch){
    if(ch == 'I')
        return 1;
    if(ch == 'V')
        return 5;
    if(ch == 'X')
        return 10;
    if(ch == 'L')
        return 50;
    if(ch == 'C')
        return 100;
    if(ch == 'D')
        return 500;
    if(ch == 'M')
        return 1000;
    return -1;
}

int romanToDecimal(string &str) {
    // code here
    int n = str.length();
    int res = 0;
    
    for(int i=0; i<n; i++){
        int s1 = value(str[i]), s2 = value(str[i+1]);
        if(s1 >= s2)
            res = res + s1;
        
        else{
            res = res + s2 - s1;
            i++;
        }
    }
    return res;
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
        cout << romanToDecimal(str);
        cout << "\n";
    }
}