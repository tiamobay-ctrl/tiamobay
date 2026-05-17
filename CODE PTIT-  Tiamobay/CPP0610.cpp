#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
class PhanSo{
private: 
	ll tu,mau;
public:
	PhanSo(){
		
	}
	PhanSo(ll t, ll m){
		tu = t;
		mau = m;
	}
	void rutgon(){
		ll uc = __gcd(tu,mau);
		mau /= uc;
		tu /= uc;
	}
	friend istream &operator >> (istream &in, PhanSo &A){
		in >> A.tu >> A.mau ;
		return in;
	}
	friend ostream &operator << (ostream &out, PhanSo A){
		out << A.tu << "/" << A.mau;
		return out;
	}
	PhanSo operator + (PhanSo B){
		PhanSo A;
		A.tu = tu * B.mau + B.tu * mau;
		A.mau = mau * B.mau;
		A.rutgon();
		return A;
	}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
