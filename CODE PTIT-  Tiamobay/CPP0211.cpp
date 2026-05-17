#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;	
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int Lmin[n],Rmax[n];
        for ( int i = 0; i < n;i++) cin >> a[i];
		Lmin[0] = a[0];
        for ( int i = 1; i < n;i++){
        	Lmin[i] = min(Lmin[i-1],a[i]);
		}
		Rmax[n-1] =a[n-1];
		for ( int j = n-2; j >= 0;j--){
			Rmax[j] =max(Rmax[j+1],a[j]);
		}
		int i = 0, j = 0, ans = -1;
		while(i < n && j < n){
			if(Lmin[i] <= Rmax[j]){
				ans = max(ans,j-i);
				j++;
			}
			else i++;
		}
		cout << ans << endl;
    }
    return 0;
}


