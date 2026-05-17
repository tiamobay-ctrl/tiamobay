#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
string check(string a, string b){
	int len = max(a.size(),b.size());
	while(a.size() < len){
		a = "0" + a;
	}
	while(b.size() < len){
		b = "0" + b;
	}
	if( a < b){
		swap(a,b);
	}
	string res ="";
	int nho = 0;
	for ( int i = len - 1; i >= 0;i--){
		int digit = (a[i]-'0') - (b[i]-'0') - nho;
		if( digit < 0){
			nho = 1;
			digit += 10;
		}
		else nho = 0;
		res = char(digit + '0') + res;
	}
	return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	string a, b;
    	cin >> a >> b;
    	cout << check(a,b) << endl;
	}
}




