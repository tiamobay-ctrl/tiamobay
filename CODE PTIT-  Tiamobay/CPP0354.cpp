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
    	int cnt = 1;
    	int l = s.size();
    	for ( int i = 1; i <= l ;i++){
    		if(s[i] == s[i-1]){
    			cnt++;
			}
			else if(s[i] != s[i-1]){
				cout << s[i-1] << cnt;
				cnt = 1;
			}
		}
		cout <<endl;
	}
    
}


