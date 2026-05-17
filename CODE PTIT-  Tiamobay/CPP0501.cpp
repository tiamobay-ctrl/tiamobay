#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 100000
#define mod 10000007
using namespace std;
struct Point{
	double x,y;
};
void input(Point &p){
	cin >> p.x >> p.y;
}
double distance (Point a, Point b){
	return sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}

