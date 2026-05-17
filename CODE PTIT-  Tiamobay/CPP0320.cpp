#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int check(string s){
	if(s[0] == '0') return -1;
	set<char> se;
	for ( char x : s){
		if(!isdigit(x)){
			return -1;
		}
		se.insert(x);
	}
	if(se.size()== 10) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int res = check(s);
		if(res == -1) cout << "INVALID\n";
		else if (res == 1 ) cout << "YES\n";
		else cout << "NO\n";	
	}
	return 0;
}

