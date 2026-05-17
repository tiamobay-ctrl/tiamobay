#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int id = 1;
class SinhVien{
public: 
	string msv,ten, lop,ns;
	double gpa;
	
	friend istream &operator >> (istream &is, SinhVien &a){
		is.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(is, a.ten);
		is >> a.lop >> a.ns >> a.gpa;	
		
		if(a.ns[1] == '/') a.ns = "0" + a.ns;
		if(a.ns[4] == '/') a.ns.insert(3,"0");
		
		string s = to_string(id++);
		while(s.size() < 3){
			s = '0' + s;
		}
		a.msv = "B20DCCN" + s;

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
	friend ostream &operator << (ostream &os, SinhVien a){
		os << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl; 
		return os;
	}
};
bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
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
