#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;	
int main(){
	int t; cin >> t;
	cin.ignore();
	map<string,int> mp;
	while(t--){
		string s;
		getline(cin,s);
		for ( int i = 0; i < s.size();i++){
			s[i] = tolower(s[i]);
		}
		stringstream ss(s);
		vector<string> v;
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		string email = v.back();
		for ( int i = 0;i < v.size()-1;i++){
			email += v[i][0];
		}
		if(mp[email] > 0){
			cout << email << mp[email] + 1;
		}
		else{
			cout << email;
		}
		cout << "@ptit.edu.vn" << endl;
		mp[email]++;
	}
}
	
	


