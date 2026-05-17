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
		string s1,s2;
		cin >> s1 >> s2;
		vector<int> f(256,0);
		int l = 0,c = 0,p = -1 ,len = 1e9;
		for (char x : s2) f[x]++;
		
		for ( int r = 0; r < (int)s1.size();r++){
			if(--f[s1[r]] >= 0) c++;
			while(c == (int)s2.size()){
				if(r - l + 1 <  len ) len = min(len,r-l+1), p = l;
				if(++f[s1[l++]] > 0) c--;
			}
		}
		cout << (p == -1 ? "-1" : s1.substr(p,len)) << endl;
	}
}

