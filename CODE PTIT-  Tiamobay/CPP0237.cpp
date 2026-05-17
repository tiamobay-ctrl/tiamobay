#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        char a[25][25];

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin >> a[i][j];

        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=1; i+k<=n && j+k<=n; k++){
                    bool ok = true;

                    for(int x=j;x<j+k;x++)
                        if(a[i][x]!='X' || a[i+k-1][x]!='X')
                            ok=false;

                    for(int x=i;x<i+k;x++)
                        if(a[x][j]!='X' || a[x][j+k-1]!='X')
                            ok=false;

                    if(ok) ans = max(ans,k);
                }
            }
        }

        cout << ans << endl;
    }
}

