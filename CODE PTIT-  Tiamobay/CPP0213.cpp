#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int mod = 1e9 + 7;
ll cnt[100007];
void sang(){
	ll fibo[92];
	fibo[0]= 0;
	fibo[1]= 1;
	for ( int i = 2; i <= 91;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for ( int i = 0; i <= 91;i++){
		if(fibo[i] < 100000) cnt[fibo[i]] = 1;
	}
}

int main(){
	sang();
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		int a[n];
		for ( int i = 0; i < n;i++) cin >> a[i];
		for ( int i = 0; i < n;i++){
			if(cnt[a[i]] == 1 && a[i] < 100000)cout << a[i] << " ";
		}
		cout << endl;
	}
}

    

