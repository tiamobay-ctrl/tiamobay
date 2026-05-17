#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
struct NhanVien {
	string ten;
	string gt;
	string ns;
	string dc;
	ll sdt;
	string nkhd;
};
void chuanhoa(string &s){
	if(s[1] == '/') s = "0" + s;
	if (s[4] == '/')s.insert(3,"0");
}
void nhap(NhanVien &a){
	getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.ns);
	getline(cin,a.dc);
	cin >> a.sdt;
	cin.ignore();
	getline(cin,a.nkhd);
	chuanhoa(a.ns);
	chuanhoa(a.nkhd);
}
void in(NhanVien a){
	cout << "00001" << " " << a.ten << " "  << a.gt << " " << a.ns << " " << a.dc << " " << a.sdt << " " << a.nkhd;	 
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}


