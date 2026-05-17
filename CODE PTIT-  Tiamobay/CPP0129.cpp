#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,p;
		cin >> n >> p;
		long long x = 0;
    	while(n){
     	   n /= p;
     	   x += n;
  	  }

    cout << x << endl;
	}
}
	    
    
    
    


