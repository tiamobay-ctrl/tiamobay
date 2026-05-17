#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
    	string s;
    	getline(cin,s);
    	string a; cin >> a;
    	stringstream ss(s);
    	string token;
    	while(ss >> token){
    		if(token != a){
    			cout << token << " ";
			}
		}
    
}


