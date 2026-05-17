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
    int t;
    cin >> t;
    while(t--){
        long long a,x,y;
        cin >> a >> x >> y;
        long long g = gcd(x, y);
        for(long long i = 0; i < g; i++){
            cout << a;
        }
        cout << '\n';
    }
    return 0;
}


