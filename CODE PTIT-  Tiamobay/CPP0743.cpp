#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string s;
    	getline(cin,s);
    	stringstream ss(s);
    	string tmp;
    	vector<string> v;
    	int cnt  = 0;
    	while(ss >> tmp){
    		v.push_back(tmp);
		}
		for ( int i = v.size() -1;i >= 0;i--){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}




