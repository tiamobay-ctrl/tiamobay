#include <bits/stdc++.h>#include <bits/stdc++.h>
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
        getline(is, a.ten);
        getline(is, a.lop);
        getline(is, a.email);
        return is;
    }
    
    friend ostream &operator << (ostream &os, NhanVien a){
        os << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
        return os;
    }
};

void testcase(NhanVien ds[], int n){
   string s; 
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for ( int i = 0; i < n;i++){
			if(ds[i].lop == s) cout << ds[i];
		}
}

int main(){
    NhanVien ds[1000];
    int N, Q;

    cin >> N;
    for(int i = 0; i < N; i++) cin >> ds[i];

    cin >> Q;
    while(Q--){
        testcase(ds, N);
    }

    return 0;
}
