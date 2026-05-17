#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector<int> l(n,1);
		for ( int i = 0; i < n;i++) cin >> a[i];
		for ( int i = 0; i < n;i++){
			for ( int j = 0; j < i;j++){
				if(a[i] > a[j]){
					l[i] = max(l[i],l[j]+1);
				}
			}
		}
		cout << *max_element(l.begin(),l.end()) << endl;
	}
    return 0;
}


