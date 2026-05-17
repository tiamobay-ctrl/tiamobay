#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int n,m;
pair<int,int> path[4] = {{-1,0},{0,-1},{0,1},{1,0}};
char a[100][100];
void ff( int i , int j){
	a[i][j] = '*';
	for ( int k = 0; k < 4; k++){
		int i1 = i + path[k].first, j1 = j + path[k].second;
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'O'){
			ff(i1,j1);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for ( int i = 1; i <= n;i++){
			for ( int j = 1; j <= m;j++){
				cin >> a[i][j];
			}
		}
		
		for ( int i =1; i <= n;i++){
			if(a[i][1] == 'O') ff(i,1);
			if(a[i][m] == 'O') ff(i,m);
		}
		for ( int i = 1; i <= m;i++){
			if(a[1][i] == 'O') ff(1,i);
			if(a[n][i] == 'O') ff(n,i);
		}
		for ( int i = 1; i <= n;i++){
			for ( int j = 1; j <= m;j++){
				if(a[i][j] != '*'){
					cout << "X" << " ";
				}
				else cout << "O" << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}


