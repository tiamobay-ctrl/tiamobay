#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;	
void solve(){
	string s; cin >> s;
	int a[26] = {0};
	for ( char x : s){
		a[x - 'a']++;
	}
	int max_val = *max_element(a,a+26);
	if(s.size() - max_val >= max_val - 1){
		cout << "1\n";
	}
	else cout << "0\n";
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		solve();
	}
}
	
	


