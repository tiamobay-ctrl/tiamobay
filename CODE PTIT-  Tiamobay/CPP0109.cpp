#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int check(int n){
	int chan = 0;
    int le = 0;
    while(n){
    	int r = n % 10;
    	if(r % 2 == 0) chan++;
    	else le++;
    	n /= 10;
	}
	return le == chan;
}

int main(){
	int n;
    cin >> n;
    int cnt = 0 ;
    for ( int i = pow(10,n-1); i < pow(10,n);i++){
		if(check(i)) {
			cout << i << " ";
			cnt++;
		}
		if(cnt % 10 == 0 && cnt != 0) cout <<"\n";
	}
    return 0;
}

    
