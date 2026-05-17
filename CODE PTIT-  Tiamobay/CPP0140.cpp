#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
long long nt( long long n){
	for ( int i = 2; i <= sqrt(n);i++){
		if ( n % i == 0) return 0;
	}
	return n > 1;
}
int check(long long n){
	for ( int i = 1;i <= 32;i++){
		if ( nt(i)){
			int tmp = (int)pow(2,i) - 1;
			if (nt(tmp)){
				long long hh = 1ll*tmp*(int)pow(2,i-1);
				if(hh == n) return 1;
			}
		}
	}
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		if (check(n)) cout << "1\n";
		else cout << "0\n";
	}
}
	    
    
    
    


