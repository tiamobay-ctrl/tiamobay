#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; 
		cin >> n;
		vector<pair<double, double>> a(n);
		for ( int i = 0; i < n;i++){
			cin >> a[i].first >> a[i].second;
		}
		double area = 0;
		for ( int i = 0; i < n;i++){
			int j = (i+1) % n;
			area += a[i].first * a[j].second;
			area -= a[i].second *  a[j].first;
		}
		area = abs(area) / 2.0;
		cout << fixed << setprecision(3) << area << endl; 
	}
}

