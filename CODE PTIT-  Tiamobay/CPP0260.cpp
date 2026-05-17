#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
    	int n;
    	cin >> n;
    	int a[n*n];
    	for ( int i = 0; i < n * n;i++){
    		cin >> a[i];
		}
		sort(a,a+n*n);
		int b[n][n];
		int cnt = 0;
		int h1 = 0, h2 = n - 1;
		int c1 = 0, c2 = n - 1;
		while(h1 <= h2 && c1 <= c2){
			for ( int i = c1; i <= c2;i++){
				b[h1][i] = a[cnt++]; ;
			}
			h1++;
			for ( int i = h1; i <= h2;i++){
				b[i][c2] = a[cnt++];
			}
			c2--;
			if(c1 <= c2){
				for (int i = c2; i >= c1;i--){
					b[h2][i] = a[cnt++] ;
				}
				h2--;
			}
			if( h1 <= h2){
				for ( int i = h2; i >= h1;i--){
					b[i][c1] = a[cnt++] ;
				}
				c1++;
			}
		}
		for ( int i = 0; i < n;i++){
			for ( int j = 0; j < n;j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
	}
}




