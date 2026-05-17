#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct SinhVien{
	string ten,lop,ns;
	double gpa;
	void chuanhoa(){
	if(ns[1] == '/') ns = "0" + ns;
	if (ns[4] == '/')ns.insert(3,"0");
}
void nhap(){
	getline(cin >> ws,ten);
	cin >> lop >> ns >> gpa;
}
void xuat(){
	chuanhoa();
	cout << "B20DCCN001" << " " << ten << " "<< lop << " " << ns << " " << fixed << setprecision(2) << gpa;
}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}


