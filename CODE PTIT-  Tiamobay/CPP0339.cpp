#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
	getline(cin,s);
	map<char,int> mp;
	for(char x : s){
		mp[x]++;
	}
	long long  ans = s.length();
	for (auto it : mp){
		ans += it.second * (it.second - 1) /2; 
	}
	cout << ans << endl;
	}
}

