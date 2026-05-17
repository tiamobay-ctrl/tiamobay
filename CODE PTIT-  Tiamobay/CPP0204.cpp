#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define max 1000001
using namespace std;
int p[max];
void sieve() {
    for (int i = 0; i <= max; i++)
    p[i] = 1;
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= max; i++) {
        if (p[i]) {
            for (int j = i * i; j <= max; j += i) {
                p[j] = 0;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    sieve();
    while(t--){
        int l,r;
        cin  >> l >> r;
        int cnt = 0;
        for ( int i = l ;i <= r;i++){
        	if(p[i]) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}


