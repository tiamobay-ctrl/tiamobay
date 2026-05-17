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
    	int n; cin >> n;
    	int a[n];
    	int x; cin >> x;
    	for ( int i = 0; i < n ;i++){
    		cin >> a[i];
		}
		for ( int i = 0; i < n ;i++){
			if(a[i] == x){
				cout << i + 1;
				break;
			}
			
		}
		cout << endl;
	}
}



