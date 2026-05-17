#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
struct SinhVien{
	string msv,ten,lop,ns;
	double gpa;
};
string chuanhoa( int i){
	string s = to_string(i);
	while(s.size() < 3){
		 s = '0' + s;
	}
	return "B20DCCN" + s;
}
void chuanhoaten(string &ten){
	stringstream ss(ten);
	string res = "",w;
	while(ss >> w){
		res += toupper(w[0]);
		for( int i = 1; i < w.size();i++){
			res += tolower(w[i]);
		}
		res += " ";
	}
	res.pop_back();
	ten = res;
}
void chuanhoans(string &ns){
	if(ns[2] != '/') ns = "0" + ns;
	if(ns[5] != '/') ns.insert(3,"0");
}
void nhap(SinhVien ds[],int n){
	for ( int i = 0; i < n;i++){
		ds[i].msv = chuanhoa(i + 1);
		
		getline(cin >> ws, ds[i].ten);
		chuanhoaten(ds[i].ten);
		
		getline(cin,ds[i].lop);
		
		getline(cin,ds[i].ns);
		chuanhoans(ds[i].ns);
		cin >> ds[i].gpa;
	}
}
bool cmp(SinhVien a,SinhVien b){
	return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(SinhVien ds[],int n){	
	for ( int i = 0; i < n;i++){
		cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop 
		<< " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

