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
		int cnt = 0; 
    	while(ss >> tmp){
    		v.push_back(tmp);
			cnt++;	
		}
		int le = 0, chan = 0;
		for ( int i = 0; i < v.size();i++){
			int x = stoi(v[i]);
			if(x % 2 == 0) chan++;
			else le++;
		}
		if(cnt % 2 == 1 && chan < le || cnt % 2 == 0 && chan > le){
			cout << "YES\n";
		} 
		else cout << "NO\n";
	}
    
}



