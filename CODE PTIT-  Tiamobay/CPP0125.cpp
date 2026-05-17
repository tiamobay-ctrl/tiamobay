#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int nt (int n){
	for ( int i = 2; i * i <= n;i++){
		if( n % i == 0) return 0;
	}
	return n > 1;
}
int main(){
	int a , b;
	cin >> a >> b;
	 if (a > b) swap(a, b);
	for ( int i = a ; i <= b ;i++){
		if(nt(i)) cout << i  << " ";
	}
    return 0;
}

    



