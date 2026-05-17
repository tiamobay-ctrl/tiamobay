#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main() {
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        long long dp[n];
        dp[0] = a[0];
        long long ans = dp[0];
        for(int i = 1; i < n; i++){
            dp[i] = max(a[i], dp[i-1] + a[i]);
            ans = max(ans, dp[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}
