#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
struct PhanSo{
	ll x;
	ll y;
};
void nhap(PhanSo &a){
	cin >> a.x;
	cin >> a.y;
}
long long gcd(long long a, long long b){
	if ( b == 0) return a;
	return gcd(b, a % b);
}
PhanSo tong(PhanSo p,PhanSo q){
	PhanSo t;
	t.x = p.x * q.y + q.x * p.y;
 	t.y = p.y * q.y;
	ll g = gcd(t.x,t.y);
	t.x /= g;
	t.y /= g;
	return t;
}
void in(PhanSo a){
	cout << a.x << "/" << a.y;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}


