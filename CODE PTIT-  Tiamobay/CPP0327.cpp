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
    	long long mod = 0;
    	for(auto c : s){
    		 mod = mod * 2 + (c - '0');
    		 mod %= 5;
		}
		if(mod == 0) cout << "Yes\n";
		else cout << " No\n";
	}
    
}
