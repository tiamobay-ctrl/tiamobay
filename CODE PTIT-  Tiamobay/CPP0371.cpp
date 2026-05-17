#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	string s;
	cin >> s;
	for( int i = 0; i < s.size();i++){
		s[i] = tolower(s[i]);
	}
	for ( int i = 0; i < s.size();i++){
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' ){
			cout << "." << s[i];
		}
	}
}

