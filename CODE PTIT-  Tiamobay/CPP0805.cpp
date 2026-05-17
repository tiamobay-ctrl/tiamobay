#include <bits/stdc++.h>
#define ll long long
using namespace std;
const long long maxn = 1e9 + 7;
int main(){
	ifstream fi1("DATA1.in");
	ifstream fi2("DATA2.in");
	
	string s;
    set<string> s1,s2;
    while(fi1>> s){
    	transform(s.begin(), s.end(), s.begin(), ::tolower);
    	s1.insert(s);
	}
    while(fi2 >> s){
    	transform(s.begin(), s.end(), s.begin(), ::tolower);
    	s2.insert(s);
	}
	map<string, int> mp;
    for (auto x : s1) mp[x]++;
    for (auto x : s2) mp[x]++;
    
    for (auto x : mp) cout << x.first << " ";
    
    cout << endl;

    for (auto x: mp) {
        if (x.second > 1)
            cout << x.first << " ";
    }
	return 0;
}


