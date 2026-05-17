#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		ll cnt = 0;
		for ( int i = 0; i < n;i++) cin >> a[i];
		sort(a,a+n);
        int j = 1;

        for(int i = 0; i < n; i++){
        	
            while(j < n && a[j] - a[i] < k){
                j++;
            }
            cnt += (j - i - 1);
        }

        cout << cnt << endl;
	}
	return 0;
}
