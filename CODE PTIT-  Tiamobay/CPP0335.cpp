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
    	int l = s.size();
    	int sum = 0,num = 0;
    	for ( int i = 0; i <= l;i++){
    		if(isdigit(s[i]) ){
    			sum = sum * 10 + (s[i] -'0');
			}
			else{
				num = max(num,sum) ;
				sum = 0;
			}
		}
		cout <<  num << endl;
	}
    
}



