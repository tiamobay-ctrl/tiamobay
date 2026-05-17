#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int ok = 0;
		string rev = s;
		reverse(rev.begin(),rev.end());
		if(rev == s) cout << "YES\n";
		else cout << "NO\n";
	}
}
