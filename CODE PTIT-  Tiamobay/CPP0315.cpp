#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
void solve(){
	string s; cin >> s;
	int i = s.size() - 2;
	while(i >= 0 && s[i] <= s[i+1]){
		--i;
	}
	if(i== -1){
		cout << "-1\n";
		return ;
	}
	int j = s.size() - 1;
	while(s[i] <= s[j] || s[j-1] == s[j] && s[j] < s[i]){
		--j;		
	}
	swap(s[i],s[j]);
	if(s[0] == '0'){
		cout << "-1\n";
	}
	else cout << s << endl;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	solve();	
	}
    
}



