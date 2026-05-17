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
    	int le = 0;
    	int chan = 0;
    	for ( int i = 0; i < s.size();i++){
    		int d = s[i] - '0';
			if(i % 2 == 0) chan += d;
			else le += d;
		}
		if(abs(chan - le) % 11 == 0) cout << "1\n";
		else cout << "0\n";
	}
    return 0;
}



