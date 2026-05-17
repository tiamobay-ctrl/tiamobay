#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
string de1 = "ABBADCCABDCCABD";
string de2 = "ACCABCDDBBCDDBB";
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		double diem = 0.0;
		if(n == 101){
			for (int i = 0; i < 15;i++){
				char c;
				cin >> c;
				if(c == de1[i]) diem += 2.0 / 3; 
			}
		}
		if(n == 102){
			for (int i = 0; i < 15;i++){
				char c;
				cin >> c;
				if(c == de2[i]) diem += 2.0 / 3; 
			}
		}
		cout << fixed << setprecision(2) << diem << endl;
	}
}
