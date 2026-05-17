#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
void check2(string &s){
	s[0] = toupper(s[0]);
	for ( int i = 1; i < s.size();i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cin.ignore();
		string s;
		getline(cin,s);
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		if(n == 1){
			check2(v.back());
			cout << v.back() << " ";
			for ( int i = 0; i < v.size()-1;i++){
				check2(v[i]);
				cout <<v[i] << " ";
			}
			cout << endl;
		}
		if(n == 2){
			for ( int i = 1; i < v.size();i++){
				check2(v[i]);
				cout << v[i] << " ";
			}
			check2(v[0]);
			cout << v[0] << endl;
		}
	}
}

