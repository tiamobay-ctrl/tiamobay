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
        int n;
        cin >> n ;
        int a[n];
        int cnt[1000] = {0};
        for ( int i = 0; i < n;i++){
        	cin >> a[i];
        	cnt[a[i]] = 1;
		}
		sort(a,a+n);
        for ( int i =0; i < n;i++){
        	if(cnt[a[i]] == 1){
        		cout << a[i] << " ";
        		cnt[a[i]] = 0;
			}
		}
		cout << endl;
    return 0;
}


