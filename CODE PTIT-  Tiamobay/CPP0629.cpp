#include <bits/stdc++.h>
using namespace std;

class SinhVien{
public: 
    string mdn, ten;
    int ssv;
    
    friend istream &operator >> (istream &is, SinhVien &a){
        getline(is >> ws, a.mdn);
        getline(is,a.ten);
        is >> a.ssv;
        return is;
    }
    
    friend ostream &operator << (ostream &os, SinhVien a){
        os << a.mdn << " " << a.ten << " " << a.ssv << endl;
        return os;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    if(a.ssv == b.ssv) return a.mdn < b.mdn;
    return a.ssv > b.ssv;
}

int main(){
    SinhVien ds[50];
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> ds[i];
    }
    
    sort(ds, ds + N, cmp);
    
    int q;
    cin >> q;
    
    while(q--){
        int l, r;
        cin >> l >> r;
        
        cout << "DANH SACH DOANH NGHIEP NHAN TU "
             << l << " DEN " << r << " SINH VIEN:\n";
        
        for (int i = 0; i < N; ++i) {
            if (ds[i].ssv > r) continue;
            if (ds[i].ssv < l) break;
            cout << ds[i];
        }
    }
    
    return 0;
}
