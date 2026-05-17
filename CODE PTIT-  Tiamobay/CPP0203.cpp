#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int cnt[100007];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		memset(cnt, 0, sizeof(cnt));
		for ( int i = 0;i < n;i++){
			int x; cin >> x;
			if ( x > 0) cnt[x] = 1;
		}
		for ( int i = 1 ;i <= 100007;i++){
			if(cnt[i] == 0){
				cout << i <<endl;
				break;
			}
		}
		cout << endl;
	}
}

