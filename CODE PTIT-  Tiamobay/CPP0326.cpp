#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
string check(string a, string b){
	int n = a.size(), m = b.size();
	vector<int> res(n+m,0);
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for ( int i = 0; i < n;i++){
		for (int j = 0; j < m;j++){
			res[i+j] += (a[i]-'0') * (b[j] -'0');
		}
	}
	int nho = 0;
	for ( int i = 0; i < res.size()-1;i++){
		if(res[i] >= 10){
			res[i+1] = res[i+1] + res[i] / 10;
			res[i] = res[i] % 10;
		}
		else nho = 0;
	}
	while(res.size() > 1 && res.back() == 0){
		res.pop_back();
	}
	string ans = "";
	for ( int i = res.size()-1; i >= 0;i--){
		ans.push_back(res[i] + '0');
	}
	return ans;
}
int main(){
	int t; cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		cout << check(a,b) << endl;
	}
}




