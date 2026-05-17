#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int id = 1;
class SinhVien{
public: 
	string msv,hoten,ten,mon;
	
	friend istream &operator >> (istream &is, SinhVien &a){
		getline(is >> ws, a.hoten);
		getline(is,a.mon);
		
		string s1;
        stringstream ss1(a.hoten);
        while (ss1 >> s1) {
            a.ten = s1;
        }
		string s = to_string(id++);
		while(s.size() < 2){
			s = '0' + s;
		}
		a.msv = "GV" + s;
		
		string res = "",w;
		stringstream ss(a.mon);
		while(ss >> w){
			res += toupper(w[0]);
		}
		a.mon = res;
		return is;
	}
	friend ostream &operator << (ostream &os, SinhVien a){
		os << a.msv << " " << a.hoten << " " << a.mon << endl;
		return os;
	}
};
bool cmp(SinhVien a, SinhVien b) {
    if(a.ten == b.ten) return a.msv < b.msv;
    return a.ten < b.ten;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

