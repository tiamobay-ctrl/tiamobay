#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string s;
        getline(cin, s);
        while (s.find("084") != string::npos) {
            s.erase(s.find("084"), 3);
        }
        cout << s << endl;
    }
    return 0;
}

    
