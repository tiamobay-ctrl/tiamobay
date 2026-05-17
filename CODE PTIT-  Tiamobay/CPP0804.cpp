#include <bits/stdc++.h>
#define ll long long
using namespace std;
const long long maxn = 1e9 + 7;
int main(){
	ifstream  fi("VANBAN.in");
	
    set<string> se;
    string s;
	while(getline(fi,s)){
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			for(char &c : tmp){
				c = tolower(c);
			}
			se.insert(tmp);
		}
	}
	for ( string s : se){
			cout << s << endl;
	}
	return 0;
}


