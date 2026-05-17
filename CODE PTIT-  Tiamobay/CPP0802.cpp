#include <bits/stdc++.h>
using namespace std;

long long ans = 0;
bool solve(string s) {
	if(s.empty()) return false;
	for (char c : s){
		if(!isdigit(c)) return false;
	}
	if(s.size() > 10) return false;
	long long x = stoll(s);
	return x <= INT_MAX;
}

int main() {
    ifstream fi;
    fi.open("DATA.in");

    string s;
    long long sum = 0;
    while (fi >> s) {
        if(solve(s)){
        	sum += stoll(s);
		}
    }
    cout << sum;
    return 0;
}
