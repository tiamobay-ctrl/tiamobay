#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        int a[n];
        for ( int i = 0; i < n;i++) cin >> a[i];
        for ( int i = d;i < n;i++){
        	cout << a[i] << " ";
		}
		for ( int i = 0; i < d;i++){
			cout << a[i] << " "; 
		}
		cout << endl;
    }
    return 0;
}


