#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int check1(long long n){
    int prev = 10;
    while(n){
        int cur = n % 10;
        if(cur >= prev) return 0;
        prev = cur;
        n /= 10;
    }
    return 1;
}
int check2(long long n){
    int prev = -1;
    while(n){
        int cur = n % 10;
        if(cur <= prev) return 0;
        prev = cur;
        n /= 10;
    }
    return 1;
}

int nt (int n){
	for ( int i = 2; i * i <= n;i++){
		if ( n % i == 0) return 0;
	}
	return n > 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int cnt = 0;
		int r = pow(10,n);
		int x = pow(10,n-1);
		for ( int i = x; i < r ;i++){
			if( check1(i) || check2(i)){
				if (nt(i)) cnt++;		
			}
		}
		cout << cnt << endl;
	}
}
