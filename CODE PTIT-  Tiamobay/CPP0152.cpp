#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
void TestCase()
{
    int a, m;
    cin >> a >> m;
    for (int i = 1; i < m; ++i)
    {
        if (a * i % m == 1)
        {
            cout << i << endl;
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}

