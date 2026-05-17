#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int n;
struct SinhVien{
	string msv,ten,lop;
	double b1,b2,b3;
};

void nhap(SinhVien &a){
	cin.ignore();
	getline(cin, a.msv);
	getline(cin, a.ten);
	getline(cin, a.lop);
	cin >> a.b1 >> a.b2 >> a.b3;	
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.ten < b.ten;
}
void sap_xep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
void in_ds(SinhVien ds[],int n){
	for ( int i = 0; i < n;i++){
	cout << i + 1 << " " <<ds[i].msv<< " " << ds[i].ten << " " << ds[i].lop << " "<<fixed << setprecision(1) << ds[i].b1 << " " << ds[i].b2 << " "<< ds[i].b3 << endl;
	}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

