#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	unsigned long long fib[93];
    fib[1] = 1;
    fib[2] = 1;

    for (int i = 3; i < 93; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
        int t;
        cin >> t;
        while(t--){
        	int n;
        	cin >> n;
        	cout << fib[n] << endl;
		}
    return 0;
}



