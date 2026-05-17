#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
bool cmp(string a, string b){
    string s1 = a + b;
    string s2 = b + a;
    return s1 > s2;
}
void TestCase(){
    int n;
    cin >> n;
    string a[n];
    for (auto &x : a) {
        cin >> x;
    }
    sort(a, a + n, cmp);
    for (auto x : a) {
        cout << x;
    }
    cout << endl;
}
int main(){
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}

