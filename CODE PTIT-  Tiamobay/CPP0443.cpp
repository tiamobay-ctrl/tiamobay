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
    	map<int,int> mp;
    	for ( int i = 1; i < n ;i++){
    		cin >> a[i];
    		mp[a[i]] ++;
		}
		for ( int i = 1; i < n ;i++){
			if(mp[i] == 0){
				cout << i;
				break;
			}
		}
		cout << endl;
	}
}



