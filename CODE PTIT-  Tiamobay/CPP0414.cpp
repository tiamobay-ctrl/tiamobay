#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int a[10];
void tach(int n){
	if ( n == 0){
		a[0] = 1;
		return;
	}
	while(n){
		int r = n % 10;
		a[r] = 1;
		n /= 10;
	}
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for ( int i = 0; i < n;i++){
        	int x; cin >> x;
    		tach(x);    	
		}
		for ( int i = 0; i < 10;i++){
			if(a[i] == 1) cout << i << " ";
		}
		cout << endl;
		memset(a,0,sizeof(a));
	}
	return 0;
}


