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
    	string a;
    	long long b;
    	cin >> a;
    	cin >> b;
    	long long  res = 0;
    	for ( char c : a){
    		res = (res * 10 + (c-'0')) % b;
		}
		cout << res << endl;
	}
}




