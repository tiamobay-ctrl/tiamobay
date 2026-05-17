#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
void check1(string &s){
	for  ( int i =0 ; i < s.size();i++){
		s[i] = toupper(s[i]);
	}
}
void check2(string &s){
	s[0] = toupper(s[0]);
	for ( int i = 1; i < s.size();i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	string s;
	getline(cin,s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for ( int i = 0; i < v.size()-1;i++){
		check2(v[i]);
		cout << v[i];
		if(i == v.size()-2) cout << ", ";
		else cout << " ";
	}
	check1(v[v.size()-1]);
	cout << v[v.size()-1];
}

