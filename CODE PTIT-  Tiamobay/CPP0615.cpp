#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int id = 1;
class NhanVien{
public: 
	string mnv,ten,gt,dc,mst,nkhd;
	int d,m,y;
	
	friend istream &operator >> (istream &is, NhanVien &a){
		getline(is >> ws, a.ten);
		getline(is, a.gt);
		scanf("%d/%d/%d\n", &a.m, &a.d, &a.y);
		getline(is, a.dc);
		getline(is, a.mst);
		getline(is, a.nkhd);
//		chuan hoa ns
//		if(a.ns[2] != '/') a.ns.insert(0, "0");
//		if(a.ns[5] != '/') a.ns.insert(3, "0");
//
//		if(a.nkhd[2] != '/') a.nkhd.insert(0, "0");
//		if(a.nkhd[5] != '/') a.nkhd.insert(3, "0");
//		tao ma nhan vien
		string s = to_string(id++);
		while(s.size() < 5){
			s = '0' + s;
		}
		a.mnv = s;
//		chuan hoa ten 
		stringstream ss(a.ten);
		string str = "", temp;
		while (ss >> temp) {
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            temp[0] = toupper(temp[0]);
            str += temp + " ";
        }
        str.pop_back();
        a.ten = str;
		return is;
	}
	friend ostream &operator << (ostream &os, NhanVien a){
		os << a.mnv << " " << a.ten << " " << a.gt; 
		printf(" %.2d/%.2d/%.4d ", a.m, a.d, a.y); 
		os << a.dc << " " << a.mst << " " << a.nkhd << endl; 
		return os;
	}
};
bool cmp(NhanVien a, NhanVien b) {  
    if (a.y < b.y) return 1;
    if (a.y == b.y) {
        if (a.m < b.m) return 1;
        if (a.m == b.m)  {
            if (a.d < b.d) return 1;
        }
    }
    return 0;
}

void sapxep(NhanVien ds[], int N) {
    sort(ds, ds + N, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

