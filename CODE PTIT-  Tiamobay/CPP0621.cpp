#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
class NhanVien{
public: 
	string msv,ten,lop,email;
};
bool cmp(NhanVien a, NhanVien b) {
    return a.msv < b.msv;
}
int main(){
    vector<NhanVien> ds;
    NhanVien a;
    while(getline(cin,a.msv)){
    	getline(cin,a.ten);
		getline(cin,a.lop);
		getline(cin,a.email);
		ds.push_back(a);
	}
	sort(ds.begin(),ds.end(),cmp);
	for (auto x : ds){
		cout << x.msv << " " << x.ten << " " << x.lop << " " << x.email << endl;
	}
    return 0;
}

