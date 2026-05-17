#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
class KhachHang{
public: 
	string ma, ten, gt, ns, dc;
	
	friend istream &operator >> (istream &is, KhachHang &a){
		static int id = 1;
		
		getline(is >> ws, a.ten);
		getline(is,a.gt);
		getline(is,a.ns);
		getline(is,a.dc);
		
		string s = to_string(id++);
        while(s.size() < 3) s = "0" + s;
        a.ma = "KH" + s;
		return is;
	}
	
};
class MatHang{
public:
    string ma, ten, dv;
    long long mua, ban;
    
    friend istream &operator >> (istream &is, MatHang &a){
        static int id = 1;
        
        getline(is >> ws, a.ten);
        getline(is, a.dv);
        cin >> a.mua >> a.ban;
        
        string s = to_string(id++);
        while(s.size() < 3) s = "0" + s;
        a.ma = "MH" + s;
        
        return is;
    }
};
class HoaDon{
public:
    string ma, makh, mamh;
    int sl;
    
    friend istream &operator >> (istream &is, HoaDon &a){
        static int id = 1;
        
        cin >> a.makh >> a.mamh >> a.sl;
        
        string s = to_string(id++);
        while(s.size() < 3) s = "0" + s;
        a.ma = "HD" + s;
        
        return is;
    }
};
KhachHang findkh(KhachHang kh[], int n, string ma){
    for(int i = 0; i < n; i++){
        if(kh[i].ma == ma) return kh[i];
    }
}

MatHang findmh(MatHang mh[], int n, string ma){
    for(int i = 0; i < n; i++){
        if(mh[i].ma == ma) return mh[i];
    }
}
void in(HoaDon hd[], int k, MatHang mh[], int m, KhachHang kh[], int n){
	for ( int i = 0; i < k;i++){
		KhachHang x  = findkh(kh,n,hd[i].makh);
		MatHang y = findmh(mh,m,hd[i].mamh);
		ll tien = hd[i].sl * y.ban;
		cout << hd[i].ma << " "<< x.ten << " " << x.dc << " "<< y.ten << " " << y.dv << " "
             << y.mua << " " << y.ban << " "<< hd[i].sl << " "<< tien << endl;
	}
}
int main(){
    KhachHang kh[50];
    MatHang mh[50];
    HoaDon hd[50];
    int n,m,k;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> kh[i];
    cin >> m;
    for(int i = 0; i < m; i++) cin >> mh[i];
    cin >> k;
    for(int i = 0; i < k; i++) cin >> hd[i];
    in(hd,k,mh,m,kh,n); 
}
