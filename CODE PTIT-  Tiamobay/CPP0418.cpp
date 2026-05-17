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
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
		vector<int> b(m);
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
        for ( int i = 0; i < m;i++){
			cin >> b[i];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		vector<int> tmp = a;
		tmp.insert(tmp.end(),b.begin(),b.end());
		set<int> uni;
		for ( int x : tmp) uni.insert(x);
		for ( int x : uni) cout << x << " ";
		cout << endl;
		int i = 0, j = 0;
		while( i < n && j < m){
			if ( a[i] == b[j]){
				cout << a[i] << " ";
				i++;
				j++;
			}
			else if ( a[i] < b[j]) i++;
			else j++;
		}
		cout << endl;
	}
	return 0;
}


