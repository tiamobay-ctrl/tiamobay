#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int check1( string s){
	for ( int i = 0; i < 4;i++){
		if(s[i] >= s[i+1]) return 0;
	}
	return 1;
}
int check2(string s){
	for ( int i = 0; i < 4;i++){
		if(s[i] != s[i+1]) return 0;
	}
	return 1;
}
int check3(string s){
    return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}

int check4(string s){
	for ( int i = 0; i < 5;i++){
		if(s[i] != '6' && s[i] != '8') return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		string tmp = s.substr(5,6);
		tmp.erase(3,1);
		if(check1(tmp) || check2(tmp) || check3(tmp) || check4(tmp)){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}

