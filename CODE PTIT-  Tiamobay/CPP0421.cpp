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
        int n;
        cin >> n;
        map<long long , bool> mp;
        for ( int  i = 0; i < n;i++){
        	long long  x; cin >> x;
        	mp[x] = 1;
		}
		for (int i = 0; i < n;i++){
			if(mp[i] == 1){
				cout << i  << " ";
			}
			else cout << "-1" << " ";
		}
		cout << endl;
	}
	return 0;
}


