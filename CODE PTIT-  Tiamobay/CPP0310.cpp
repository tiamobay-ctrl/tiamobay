#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
ll min(string a, string b){
	int n = a.size();
	int m = b.size();
	for ( int i = 0 ; i < n;i++){
		if((a[i]-'0') == 6) a[i] = '5';
	}
	for ( int i = 0 ; i < m;i++){
		if((b[i]-'0') == 6) b[i] = '5';
	}
	ll ans1 = stoll(a);
	ll ans2 = stoll(b);
	return ans1 + ans2;
}
ll max(string a, string b){
	int n =a.size();
	int m = b.size();
	for ( int i = 0 ; i < n;i++){
		if((a[i]-'0') == 5) a[i] = '6';
	}
	for ( int i = 0 ; i < m;i++){
		if((b[i]-'0') == 5) b[i] = '6';
	}
	ll ans1 = stoll(a);
	ll ans2 = stoll(b);
	return ans1 + ans2;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string a,b;
		cin >> a >> b;
		cout << min(a,b) << " " << max(a,b) << endl;
	}
	return 0;
}

