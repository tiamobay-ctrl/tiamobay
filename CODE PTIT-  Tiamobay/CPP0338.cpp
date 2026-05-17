#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		int ans = 0;
		for ( int i = 0; i < (int)s.size();i++){
			int cnt[256] = {0};
			int dem = 0;
			for ( int j = i; j < (int)s.size();j++){
				if(cnt[s[j]] == 0){
					cnt[s[j]] = 1;
					dem++;
				}
				if(dem == k) ans++;
				else if(dem > k) break;
			}
		}
		cout << ans << endl;
	}
}
