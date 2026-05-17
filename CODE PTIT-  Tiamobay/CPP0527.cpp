#include <bits/stdc++.h>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
struct Time{
	int h,m,s;
};
bool cmp(Time a,Time b){
	int t1 = a.h * 3600 + a.m * 60 + a.s;
	int t2 = b.h * 3600 + b.m * 60 + b.s;
	return t1 <  t2;
}
int main(){
	int n; cin >> n;
	vector<Time> a(n);
	
	for( int i = 0; i < n;i++){
		cin >> a[i].h >> a[i].m >> a[i].s;
	}
	sort(a.begin(),a.end(),cmp);
	for (auto x : a){
		cout << x.h << " " << x.m << " " << x.s << endl;
	}
}

