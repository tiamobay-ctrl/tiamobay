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

long long lcm(long long a, long long b){
    return a / gcd(a, b) * b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y, z;
        int n;
        cin >> x >> y >> z >> n;

        long long L = lcm(lcm(x, y), z);

        long long a = pow(10, n - 1);
        long long b = pow(10, n) - 1;
        long long first = ((a + L - 1) / L) * L;

        if(first > b)
            cout << "-1\n";
        else
            cout << first << "\n";
    }
    return 0;
}


