#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
void check(long long n){
    int cnt = 0;

    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            if( i % 2 == 0) cnt++;
            if ( i != n/i && (n/i) % 2 == 0) cnt++;
        }
    }	
    if(n % 2 == 0) cnt++;
    cout << cnt << "\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		check(n);
	}
  return 0;
}
	    
    
    
    
