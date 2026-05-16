#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		char c; cin >> c;
		if(isupper(c)){
			c = tolower(c);
		}
		else{
			c = toupper(c);
		}
		cout << c << endl;
	}
}
