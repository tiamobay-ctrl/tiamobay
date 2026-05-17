#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){

		string s;
		cin >> s;
		int ok = 1;
		for ( int i = 0; i < (int)s.size()-1;i++){
			if(abs((s[i] - '0') - (s[i+1] - '0')) != 1){
				ok = 0;
				break;
			}
		}
		if(ok == 1) cout << "YES\n";
		else cout << "NO\n";
	}
}
