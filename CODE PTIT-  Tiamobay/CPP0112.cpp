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
		double x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		double r = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
		cout << fixed <<setprecision(4) << r << endl;
	}
    return 0;
}

    
