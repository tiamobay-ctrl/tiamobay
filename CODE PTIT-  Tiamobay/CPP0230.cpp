#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main() {
    	int n;
    	cin >>  n ;
    	int a[n][4];
    	for ( int i = 0; i < n;i++){
    		for ( int j = 0; j < 3;j++){
    			cin >> a[i][j];
			}
		}
		int cnt = 0;
		for ( int i = 0; i < n;i++){
			int c1 =0, c0 = 0;
			for ( int j = 0; j < 3;j++){
				if(a[i][j] == 1) c1++;
				else if(a[i][j] == 0) c0++;
			}
			if(c1 > c0) cnt++;
		}
		cout << cnt  <<  endl;
    return 0;
}


