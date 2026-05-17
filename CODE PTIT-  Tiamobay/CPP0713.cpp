#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int n,a[100], ok;
void ktao(){
	for ( int i = 1; i <= n;i++){
		a[i] = i;
	}
}
void sinh(){
	int i = n -1;
	while( i >= 1 && a[i] > a[i+1]){
		i--;
	} 
	if(i == 0){
		ok  = 0;
	}
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i],a[j]);
		int  l = i + 1, r = n;
		reverse(a + i + 1, a + n + 1);	
	}
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> n;
    ok = 1;
    ktao();
    while(ok == 1){
    	for ( int i = 1; i <= n;i++){
    		cout << a[i];
		}
		cout << " ";
		sinh();
		}
		cout << endl;
	}
	return 0;
}
