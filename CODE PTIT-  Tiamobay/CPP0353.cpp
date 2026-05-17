#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
bool check(string s){
	string rev = s;
	reverse(rev.begin(),rev.end());
	return rev == s;
}
int main(){
	map<char,char> mp;
	string a = "ABC";string b = "DEF";string c = "GHI";string d = "JKL";
	string e = "MNO";string f = "PQRS";string g = "TUV";string h = "WXYZ";
	for (char x : a) mp[x] = '2';
	for (char x : b) mp[x] = '3';
	for (char x : c) mp[x] = '4';
	for (char x : d) mp[x] = '5';
	for (char x : e) mp[x] = '6';
	for (char x : f) mp[x] = '7';
	for (char x : g) mp[x] = '8';
	for (char x : h) mp[x] = '9';
	
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin >> ws,s);
		
		string ans = "";
		for (char x : s){
			x = toupper(x);
			ans += mp[x];
		}
		if(check(ans)) cout << "YES\n";
		else cout << "NO\n";
	}
}

