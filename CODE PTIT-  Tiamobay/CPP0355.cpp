#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
bool check(string s){
	char c = s.back();
	return (c == '.'|| c == '?' || c == '!');
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    vector<string> v;
    while(cin >> s){
    	v.push_back(s);
	}
	bool ok = 1;
	for(auto x : v){
		transform(x.begin(),x.end(),x.begin(), :: tolower);
		if(ok){
			x[0] = toupper(x[0]);
			ok = 0;
		}
		if(check(x)){
			x.pop_back();
			cout << x << endl;
			ok = 1;
		}
		else cout << x << " ";
	}
	return 0;
}


