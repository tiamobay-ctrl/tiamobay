#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		cout << v.size() << endl;
	}
}

