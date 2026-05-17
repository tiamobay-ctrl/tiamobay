#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
class NhanVien {
public:
    string ten,gt,ns,dc,mst,nkhd;

    friend istream &operator >> (istream &is, NhanVien &a) {
        getline(is, a.ten);
        getline(is,a.gt);
        getline(is,a.ns);
        getline(is,a.dc);
        getline(is,a.mst);
        getline(is,a.nkhd);
        return is;
    }

    friend ostream &operator << (ostream &os, NhanVien a) {
        os <<"00001"<< " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd << endl;
        return os;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}

