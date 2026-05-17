#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	int n,k; cin >> n >> k;
    	int a[n];
    	for ( int i = 0; i < n;i++){
    		cin >> a[i];
		}
		multiset<int> s;
		for  (int i = 0; i < k;i++){
			s.insert(a[i]);
		}
		cout << *s.rbegin() << " ";
		for (int i = k; i < n;i++){
			s.erase(s.find(a[i-k]));
			s.insert(a[i]);
			cout << *s.rbegin() << " ";
		}
		cout << endl;
	}
	return 0;
}


