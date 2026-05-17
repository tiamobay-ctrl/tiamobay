#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
static const long long MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        x %= MOD;

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            sum = (sum * x + a) % MOD;
        }

        cout << sum << '\n';
    }
    return 0;
}


