#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
class NhanVien{
public: 
	string msv, ten, lop, email;
	
	friend istream &operator >> (istream &is, NhanVien &a){
    getline(is >> ws, a.msv);
    getline(is,a.ten);
    getline(is,a.lop);
    getline(is,a.email);
    return is;
	}	
	friend ostream &operator << (ostream &os, NhanVien a){
		os << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
		return os;
	}
};
bool cmp(NhanVien a, NhanVien b) {
    return a.msv < b.msv;
}
bool check(NhanVien a,int b){
	int c = stoi(a.lop.substr(1,2));
	if(c == b) return true;
	return false;
}
int main(){
    NhanVien ds[1000];
    int n,q;
    cin >> n;
    for(int i=0;i<n;i++) cin >> ds[i];
    cin >> q;
    while(q--){
    	string s; 
		cin >> s;
		int b = stoi(s.substr(2,2));
		cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
		for ( int i = 0; i < n;i++){
			if(check(ds[i],b)) cout << ds[i];
		}
	}
    return 0;
}

