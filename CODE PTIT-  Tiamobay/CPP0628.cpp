#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int id = 1;
class SinhVien{
public: 
	string mdn,ten,ssv;
	
	friend istream &operator >> (istream &is, SinhVien &a){
		getline(is >> ws, a.mdn);
		getline(is,a.ten);
		getline(is,a.ssv);
		return is;
	}
	friend ostream &operator << (ostream &os, SinhVien a){
		os << a.mdn<< " " << a.ten << " " << a.ssv << endl;
		return os;
	}
};
bool cmp(SinhVien a, SinhVien b) {
	int c = stoi(a.ssv);
	int d = stoi(b.ssv);
	if(c == d) return a.mdn < b.mdn;
	return c > d;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for (i = 0 ; i < N ;i++){
    	cout << ds[i];
	}
    return 0;
}

