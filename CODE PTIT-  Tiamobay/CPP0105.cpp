#include <bits/stdc++.h>
#include <fstream>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
#define mod 1000000007
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		getline(cin >> ws, s);
		int ok = 0;
		for (char x : s){
			if(x != '0' && x != '6' && x != '8') ok = 1;
		}
		if(ok) cout <<"NO\n";
		else cout <<"YES\n";
	}
}
