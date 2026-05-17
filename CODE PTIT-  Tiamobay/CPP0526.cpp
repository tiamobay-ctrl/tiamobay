#include <bits/stdc++.h>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
struct Person{
	string name;
	int d,m,y;
};
bool cmp(Person a,Person b){
	if(a.y != b.y) return a.y < b.y;
	if(a.m != b.m) return a.m < b.m;
	return a.d < b.d;
}
int main(){
	int n; cin >> n;
	vector<Person> a(n);
	
	for( int i = 0; i < n;i++){
		char c;
		cin >> a[i].name >> a[i].d >> c >> a[i].m >> c >> a[i].y;
	}
	sort(a.begin(),a.end(),cmp);
	cout << a[n-1].name << endl << a[0].name;
}

