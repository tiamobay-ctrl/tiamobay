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
    	string tmp;
    	vector<char> v;
    	int sum = 0;
    	for(char x : s){
    		if(isdigit(x)) sum += x -'0';
    		else{
    			v.push_back(x);
			}
		}
		sort(v.begin(),v.end());
		for ( int i = 0; i < v.size();i++){
			cout << v[i];
		}
		cout << sum << endl;
	}
    
}



