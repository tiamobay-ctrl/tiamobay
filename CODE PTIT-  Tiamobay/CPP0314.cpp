#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
		int n; cin >> n;
		cin.ignore();
		set<string> se;
		for ( int i = 0; i < n;i++){
			string s;
			getline(cin,s);
			se.insert(s);
		}
		cout << se.size() << endl;
}

