#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void TestCase()
{
    long long n;
    cin >> n;
    long long r;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (isPrime(n / i)) {
                cout << n / i << endl;
                return;
            }
            if (isPrime(i))
                r = i;
        }
    }
    cout << r << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	TestCase();
	}
    return 0;
}



