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
		int map[256] = {0};
		for(int i = 0; i < s.size();i++){
			map[s[i]]++;
		}
		for (int i = 0; i < s.size();i++){
			if(map[s[i]] == 1) cout << s[i];
		}
		cout << endl;
	}
}
