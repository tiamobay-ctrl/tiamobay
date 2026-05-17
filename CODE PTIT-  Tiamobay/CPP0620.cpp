#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
int id = 1;
class SinhVien{
public:	
	string msv,ten,lop,email;
	
	friend  istream &operator >> (istream &is,SinhVien &a){
		getline(is >> ws,a.msv);
		getline(is,a.ten);
		getline(is,a.lop);
		getline(is,a.email);
		return is;
	}
	friend ostream &operator << (ostream &os,SinhVien a){
		os << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
		return os;
	}
};
bool cmp(SinhVien a ,SinhVien b){
	if(a.lop == b.lop) return a.msv < b.msv;
	return a.lop < b.lop;	
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
    SinhVien ds[1000];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
