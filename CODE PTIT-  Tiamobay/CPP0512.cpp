#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;

struct PhanSo{
	ll tu,mau;
};
void rutgon(PhanSo &A){
	ll g = __gcd(A.tu,A.mau);
	A.tu = A.tu / g;
	A.mau = A.mau / g;
}
PhanSo sum(PhanSo A,PhanSo B){
	PhanSo C;
	ll g = __gcd(A.mau,B.mau);
	ll l = A.mau * B.mau / g;
	 C.tu = A.tu * l / A.mau + B.tu * l / B.mau;
    C.mau = l;
    rutgon(C);
    return C;
}
PhanSo mul(PhanSo A,PhanSo B){
	PhanSo C;
	C.tu = A.tu * B.tu;
	C.mau = A.mau * B.mau;
	rutgon(C);
	return C;
}
void process(PhanSo A, PhanSo B){
	PhanSo C = mul(sum(A,B), sum(A,B));
	PhanSo D = mul(mul(A,B),C);
	cout << C.tu << "/" << C.mau << " " <<D.tu << "/" << D.mau << endl; 
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

