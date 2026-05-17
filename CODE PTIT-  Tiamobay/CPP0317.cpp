#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
bool check(string s){
	int r = 0, l = s.size() - 1;
	while(r < l){
		if(s[r++] != s[l--]) return 0;
	}
	return 1;
}
bool check1 (string s){
	int l = s.size();
	for ( int i = 0; i < l ;i++){
		if((s[i] - '0') % 2 != 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(check(s)  && check1(s)) cout << "YES\n";
		else cout << "NO\n";
	}
}
