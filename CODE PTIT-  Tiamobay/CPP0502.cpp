#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
struct ThiSinh{
	string ten,ns;
	double a,b,c;
};
void nhap(ThiSinh &t){
	getline(cin,t.ten);
	getline(cin,t.ns);
	cin >> t.a >> t.b >> t.c;
}
void in(ThiSinh t){
	
	cout << t.ten << " " << t.ns << " " << fixed << setprecision(1) << t.a + t.b + t.c << endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

