#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define MAX 1000000
using namespace std;
int prime[MAX + 1];
int svttp[MAX + 1];
int prime_count = 0;
void sangnto(){
    fill(prime, prime + MAX + 1, 0);
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}
void kbt_datten(){
    for (int i = 2; i <= MAX; i++)
    {
        if (prime[i] == 0)
        {
            svttp[prime_count] = i;
            prime_count++;
        }
    }
}
int main(){
    sangnto();
    kbt_datten();
    int t;
    if (!(cin >> t))
        return 0;
    while (t--){
        long long n;
        cin >> n;
        for (int i = 0; i < prime_count; i++){
            if (1LL * svttp[i] * svttp[i] > n)
                break;
            if (n % svttp[i] == 0){
                int cnt = 0;
                while (n % svttp[i] == 0){
                    cnt++;
                    n /= svttp[i];
                }
                cout << svttp[i] << " " << cnt << "\n";
            }
        }
        if (n > 1){
            cout << n << " " << 1 << "\n";
        }
        cout << endl;
    }
    return 0;
}

