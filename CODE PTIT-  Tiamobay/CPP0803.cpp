#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ifstream fi;
	fi.open("DATA.in");
	map<int,int> mp;
	int x;
	while(fi >> x){
		mp[x]++;
	}
	for (auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
}
