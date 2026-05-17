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

bool canFind(string a, string b) {
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    return (b.find(a) != -1);
}
int main(){
    SinhVien ds[50];
    int N, i,q;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    cin >> q;
    while(q--){
    	string s;
    	getline(cin >> ws,s);
    	string res1 = "",w1;
		stringstream ss1(s);
		while(ss1 >> w1){
			res1 += toupper(w1[0]);
		}
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (i = 0;i < N;i++){
			if(canFind(s, ds[i].hoten)) cout << ds[i];
		}
	}
    return 0;
}

