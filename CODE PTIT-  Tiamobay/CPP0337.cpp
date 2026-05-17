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
		string s; cin >> s;
		set<char> a;
		for (char x : s) a.insert(x);
		int need = a.size();
		int res = 1e9,l = 0,c = 0;
		vector<int> f(256,0);
		for ( int r = 0 ; r < (int)s.size();r++){
			if(++f[s[r]] == 1) c++;
			while(c== need){
				res = min(res,r-l+1);
				if(--f[s[l]] == 0) c--;
				l++;
			}
		}
		cout << res << endl;
	}
}

