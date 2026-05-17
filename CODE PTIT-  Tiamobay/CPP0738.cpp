#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std; 
int main() { 
int t; cin >> t; 
while (t--) { 
	int n; cin >> n; 
	vector<int> a(n), b(n); 
	
	for ( int i = 0; i < n;i++) cin >> a[i];
	
	int dem = 0;
	while(1){
		for ( int i = 0; i < n;i++){
			if(a[i] % 2 == 1){
				a[i]--;
				dem++;
			}
		}
		int check0 = 1;
		for ( int i = 0; i < n;i++){
			if(a[i] != 0){
				check0 = 0;
				break;
			}
		}
		if(check0) break;
		
		for ( int i = 0; i < n;i++){
				a[i] /= 2;
			}
			dem++;
	}
	cout << dem << endl;
} 
}

