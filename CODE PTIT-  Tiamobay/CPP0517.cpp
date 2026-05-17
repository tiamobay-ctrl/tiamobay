#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
struct NhanVien{
	string ten;
	string gt,ns,dc,nkhd,mst;
};
void nhap(NhanVien &a){
    getline(cin >> ws, a.ten);  
    cin >> a.gt;
    cin >> a.ns;
    getline(cin >> ws, a.dc); 
    cin >> a.mst;
    cin >> a.nkhd;
}
void inds(NhanVien a[], int n){
	for ( int i = 0; i < n;i++){
		string s = to_string(i+1);
		s = string(5-s.size(),'0') + s;
		cout << s << " " ;
		cout << a[i].ten <<" "<<a[i].gt<<" "<<a[i].ns<<" "<<a[i].dc<<" "<<a[i].mst<<" "<<a[i].nkhd<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}


