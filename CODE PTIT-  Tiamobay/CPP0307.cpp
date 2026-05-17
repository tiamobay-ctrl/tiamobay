#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s,a;
		getline(cin,s);
		getline(cin,a);
		
		map<string,int> mp;
		stringstream ss2(a);
		string x;
		
		while(ss2 >> x){
			mp[x]++;
		}
		
		vector<string> v;
		stringstream ss(s);
		string tmp;
		set<string> used;
		while(ss >> tmp){
			if(mp[tmp] == 0 && used.count(tmp)==0){
				v.push_back(tmp);
				used.insert(tmp);
			}
		}
		
		sort(v.begin(),v.end());
		for ( int i = 0; i < v.size();i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}

