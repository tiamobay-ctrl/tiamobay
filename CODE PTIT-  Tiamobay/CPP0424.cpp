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
    	int k,n;
		cin >> k >> n;
		int a[n*k];
		for ( int i = 0; i < k * n;i++){
			cin >> a[i];
		}	
		sort (a,a + n * k);
		for ( int i = 0; i < k * n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}



