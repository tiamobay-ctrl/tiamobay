#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
struct Staff{
	int stt;
	string msv, ten, lop, email, cty;
	
	void input(){
		getline(cin,msv);
		getline(cin,ten);
		getline(cin,lop);
		getline(cin,email);
		getline(cin,cty);
	}
	void output(){
		cout << stt << " " << msv << " " << ten << " " << lop << " " << email << " "<< cty << endl; 
	}
};
bool cmp(Staff a, Staff b){
    return a.msv < b.msv;
}
void testCase(Staff a[],int n){
	string s; cin >> s; 
	for ( int i = 0; i < n;i++){
		if(a[i].cty == s) a[i].output();
	}
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    Staff a[n];
    for (int i = 0; i < n; ++i) {
        a[i].stt = i + 1;
        a[i].input();
    }
    sort(a, a + n, cmp);
    int q;
    cin >> q;
    while (q--) {
        testCase(a, n);
    }
    return 0;
}

