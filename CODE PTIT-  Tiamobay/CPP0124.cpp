#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
void pt(int n){
	for ( int i = 2;i <= sqrt(n);i++){
		if(n % i == 0){
			int cnt = 0;
			while ( n % i == 0){
				cnt++;
				n /= i;
			}
			cout << i << " " << cnt << endl;
		}
	}
	if ( n != 1) cout << n << " " << 1 << endl;
}
int main(){
	int n;
	cin >> n;
	pt(n);
    return 0;
}

    



