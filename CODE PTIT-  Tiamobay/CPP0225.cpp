#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<vector<int>> a(n, vector<int>(n));
        vector<int> row(n,0), col(n,0);
        
        int sum = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
                row[i] += a[i][j];
                col[j] += a[i][j];
                sum += a[i][j];
            }
        }
        
        int maxRow = *max_element(row.begin(), row.end());
        int maxCol = *max_element(col.begin(), col.end());
        
        int X = max(maxRow, maxCol);
        
        cout << 1LL*n*X - sum << endl;
    }
}

