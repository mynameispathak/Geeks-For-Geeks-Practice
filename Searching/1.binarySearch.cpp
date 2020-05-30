// Submitted by Aniket Pathak
// mynameispathak

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int l, int r, int x){
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid] == x) return 1;
        else if(x > arr[mid]){
            l = mid + 1;
        }
        else if(x < arr[mid])
            r = mid - 1;
    }
    return -1;
}

int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int T;
	cin >> T;
	while(T--){
	    int N, X;
	    cin >> N >> X;
	    vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << binarySearch(A, 0, N, X) << "\n";
	}
	return 0;
}