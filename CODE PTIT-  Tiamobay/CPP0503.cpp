#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
ll gcd(ll a, ll b){
	if ( b  == 0) return a;
	return gcd(b, a%b);
}
int main(){
    ll a,b;
    cin >> a >> b;
    ll c = gcd(a,b);
    a =  a / c;
    b = b / c;
    cout << a << "/" << b ;
}


