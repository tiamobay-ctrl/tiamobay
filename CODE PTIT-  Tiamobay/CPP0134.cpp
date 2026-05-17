#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
void TestCase()
{
    long long n,k;
    cin >> n >> k;
	int cnt =  1;
	long long a[100];
  	for ( long long i = 2; i * i <= n;i++){
  		while( n % i == 0){
  		a[cnt++] = i;
		n/=i;
		}	
	}
	if (n > 1) {
    a[cnt++] = n;
    }
	if (k >= cnt) cout << -1 <<endl; 
    else cout << a[k] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	TestCase();
	}
    return 0;
}



