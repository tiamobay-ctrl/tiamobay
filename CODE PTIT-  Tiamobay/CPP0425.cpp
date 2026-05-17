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
        int a[n];
        int b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        int cnt = 0;
        for ( int i = 0; i < n;i += 2){
        	b[i] = a[cnt++];
		}
		for ( int i = 1; i < n;i+=2){
			b[i] =a[cnt++];
		}
        for(int x : b) cout << x << " ";
        cout << endl;
    }
}


