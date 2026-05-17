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
		double x1,y1,x2,y2,x3,y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		
		double a = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3)); 
        double b = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1)); 
        double c = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)); 
        if(b+c <= a || c + a <=b || b + a <= c ){
        	cout << "INVALID" << endl;
		}
		else{
			double p = (a + b + c) / 2.0;
			double S = sqrt(p * (p - a) * (p - b) * (p - c));
			double R = (a*b*c) / (4.0 * S);
			double ans = pi * R * R;
			cout << fixed << setprecision(3) << ans << endl;
		}
	}
	return 0;
}


