#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
class SinhVien {
public:
    string ten, lop, ns;
    float gpa;

    friend istream &operator >> (istream &is, SinhVien &a) {
    	cin.ignore();
        getline(is, a.ten);
        is >> a.lop >> a.ns >> a.gpa;
        if (a.ns[2] != '/') a.ns.insert(0, "0");
        if (a.ns[5] != '/') a.ns.insert(3, "0");
        
        stringstream ss(a.ten);
		string res = "", w;
		while(ss >> w){
			res += toupper(w[0]);
			for ( int i = 1; i < w.size();i++){
			res += tolower(w[i]);
		}
			res += " ";
		}
		res.pop_back();
		a.ten = res;
		
        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        os << "B20DCCN001" << " " << a.ten << " " << a.lop << " " << a.ns << " ";
        os << fixed << setprecision(2) << a.gpa;
        return os;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}


