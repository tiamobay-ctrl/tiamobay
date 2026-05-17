#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
struct SinhVien {
	string a,b,c;
	double d;
};
void chuanhoa(string &s){
	if(s[1] == '/') s = "0" + s;
	if (s[4] == '/')s.insert(3,"0");
}
void nhap(SinhVien &a){
	getline(cin, a.a);
    getline(cin, a.b);
    getline(cin, a.c);
	cin >> a.d;
	chuanhoa(a.c);
}
void in(SinhVien a){
	cout << "B20DCCN001" << " " << a.a << " "<< a.b << " " << a.c << " " << fixed << setprecision(2) << a.d;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}


