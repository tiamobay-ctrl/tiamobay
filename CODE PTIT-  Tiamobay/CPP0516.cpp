#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;

struct Product{
	int id;
	string ten,nhomhang;
	double buy,sell,profit;
};
void nhap(Product a[],int n){
	cin.ignore();
	for (int i = 0; i < n;i++){
		getline(cin,a[i].ten);
		getline(cin,a[i].nhomhang);
		cin >> a[i].buy >> a[i].sell;
		a[i].profit = a[i].sell - a[i].buy;
		cin.ignore();
	}
}
bool cmp(Product A,Product B){
 	return  A.profit > B.profit;
}
void in(Product a[],int n){
	for ( int i = 0; i < n;i++){
		cout << a[i].id << " " << a[i].ten << " " << a[i].nhomhang << " ";
        cout << fixed << setprecision(2) << a[i].profit << endl;
 	}
}

int main(){
    int n; cin >> n;
    Product a[n];
    for ( int i = 0; i < n;i++){
    	a[i].id = i + 1;
	}
	nhap(a,n);	
	sort(a,a+n,cmp);
	in(a,n);
}

