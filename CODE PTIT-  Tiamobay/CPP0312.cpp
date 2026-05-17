#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int n; cin >> n;
		if(s.size()< 26) {
			cout << 0 << endl; 
			continue;
		}
		set<char> se;
		for (char x : s){
			se.insert(x);
		}
		if(26 - se.size() <= n){
			cout << "1\n";
		}
		else cout << "0\n";
	}
}

