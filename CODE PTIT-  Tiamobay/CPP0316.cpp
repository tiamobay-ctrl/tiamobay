#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int check(string s){
	int mod = 0;
	for (char c : s){
		mod = (mod * 10 + (c -'0')) % 9;
	}
	return mod == 0 && s != "0";
}
int main(){
	int t;
   	cin >> t;
   	cin.ignore();
   	while(t--){
   	string s;
   	cin >> s;
   	if(check(s)) cout << "1\n";
   	else cout << "0\n";
	}
}


