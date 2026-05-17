#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int n,k,b;
	cin >> n >> k >> b;
	vector<int> bad(n+1,0);
	for ( int i = 0 ; i < b;i++){
		int x; cin >> x;
		bad[x] = 1;
	}
	int cnt = 0;
	for ( int i = 1; i <= k;i++){
		if(bad[i]== 1) cnt++;
	}
	int ans = cnt;
	for ( int i = k+1; i <= n;i++){
		if(bad[i-k]== 1) cnt--;
		if(bad[i] == 1) cnt++;
		ans = min(ans,cnt);
	}
	cout << ans;
}


