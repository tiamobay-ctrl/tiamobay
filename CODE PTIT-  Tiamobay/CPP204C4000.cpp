#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
struct SinhVien {
	string ten,lop,ns;
	double gpa;
};
void chuanhoa(string &s){
    if (s.size() >= 2 && s[1] == '/') s = "0" + s;
    if (s.size() >= 5 && s[4] == '/') s.insert(3, "0");
}
void nhapThongTinSV(SinhVien &a){
	getline(cin >> ws,a.ten);
	cin >> a.lop;
	cin >> a.ns;
	cin >> a.gpa;
	chuanhoa(a.ns);
}
void inThongTinSV(SinhVien a){
	cout << "N20DCCN001" << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl; 
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}


