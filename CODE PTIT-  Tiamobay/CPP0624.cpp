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
string solve(string s){
	if (s == "Ke toan") return "KT";
    if (s == "Cong nghe thong tin") return "CN";
    if (s == "An toan thong tin") return "AT";
    if (s == "Vien thong") return "VT";
    if (s == "Dien tu") return "DT";
}
int main(){
    NhanVien ds[1000];
    int n,q;
    cin >> n;
    for(int i=0;i<n;i++) cin >> ds[i];
    cin >> q;
    while(q--){
    	string s; 
		getline(cin >> ws, s);
		
		string check = solve(s);
		transform(s.begin(),s.end(),s.begin(), :: toupper);
		cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
		for ( int i = 0; i < n;i++){
			if(check == "CN" || check == "AT"){
				if(ds[i].msv[5] == check[0] && ds[i].msv[6] == check[1] && ds[i].lop[0] != 'E')
				cout << ds[i];
			}
			else{
				if(ds[i].msv[5] == check[0] && ds[i].msv[6] == check[1])
				cout << ds[i];
			}
		}
	}
    return 0;
}

