#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void swap (int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp; 
}
void selectionsort (int a[], int n){
	for ( int i = 0; i < n - 1;i++){ // Dung 1 bien de luu chi so cua ptu nho nhat
		int min = i;
		for ( int j = i + 1; j < n;j++){// Duyet tat ca ptu dung sau ptu hien tai va cap nhat
			if ( a[j] < a[min]){
				min = j;
			}
		}
		 swap(&a[i],&a[min]);
	}
}
void bubblesort (int a[], int n){
	for (int i = 0; i < n - 1;i++){
		for ( int  j = 0 ;j < n - i - 1;j++){
			if (a[j] > a[j+1]) swap (*a[j], *a[j+1]);
		}
	}
}
void insersort(int a[],int n){
	for( int i = 1; i < n;i++){ //Lay ptu chi so i
		int x =a[i], pos = i - 1;
		while ( pos >= 0 && x < a[pos]){
			a[pos+1] = a[pos];
			--pos;
		}		
		a[pos + 1] = x;
	}
}
void sapxep (int a[])
int main(){
	int a[1000], n;
	scanf ("%d",&n);
	for ( int i = 0 ; i < n;i++){
		scanf ("%d", &a[i]);
	}
	selectionsort(a,n);	
	for ( int i = 0; i < n;i++){
		printf ("%d", a[i]);
	}
	return 0;
}


