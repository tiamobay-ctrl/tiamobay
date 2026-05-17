#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll sum = 0, digit = 0;
		for ( int i = 0; i < s.size();i++){
			if(isdigit(s[i])){
				digit = digit * 10 + (s[i] - '0');
			}
			else{
				sum += digit;
				digit = 0;
			}
		}
		sum += digit;
		cout << sum << endl;	
	}
}

