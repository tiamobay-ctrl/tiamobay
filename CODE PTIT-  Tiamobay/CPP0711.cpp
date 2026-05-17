#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int n;
int a[100];

void sinh(int i) {
    if (i == n) {
        for (int j = 0; j < n; j++)
            cout << a[j];
            cout << " ";
        return;
    }
    for (int x = 0; x <= 1; x++) {
        a[i] = x;
        sinh(i + 1);
    }
}

int main() {
    int t; cin >> t;
    while(t--){
    	cin >> n;
    	sinh(0);
    	cout << endl;
	}
    return 0;
}
	

