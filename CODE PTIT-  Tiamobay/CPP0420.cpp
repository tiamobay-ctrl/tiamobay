#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int a[1000001];
int n,x;
bool cmp(int a,int b){
	return abs(a-x) < abs(b-x);
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> x;
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
		stable_sort(a,a+n,cmp);
		for ( int i = 0; i < n;i++){
			cout <<a[i]  << " ";
		}
		cout << endl;
	}
}


