#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;

struct SinhVien{
	string msv,ten,lop,ns;
	double gpa;
};
string chuanhoa(int i){
	string s = to_string(i);
	while(s.size() < 3){
		s = '0' + s;
	}
	return "B20DCCN" + s;
}
void chuanhoans(string &ns){
	if(ns[1] == '/') ns = "0" + ns;
	if(ns[4] == '/') ns.insert(3,"0");
}
void nhap(SinhVien ds[],int n){
	cin.ignore();
	for (int i = 0; i < n;i++){
		ds[i].msv = chuanhoa(i+1);
		getline(cin,ds[i].ten);
		getline(cin,ds[i].lop);
		getline(cin,ds[i].ns);
		chuanhoans(ds[i].ns);
		cin >> ds[i].gpa;
		cin.ignore();
	}
}
void in(SinhVien ds[],int n){
	for ( int i = 0; i < n;i++){
		cout << ds[i].msv << " " <<ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " "<< fixed << setprecision(2) <<ds[i].gpa << endl;
 	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

