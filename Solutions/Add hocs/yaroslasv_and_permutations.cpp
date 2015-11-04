#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

#define MAXN 100
#define MAXVAL 1000

using namespace std;

int n;
int A[MAXN], freq[MAXVAL+1];

int main( ) {
	
	scanf( "%d", &n );
	
	for ( int i = 0; i < n; ++i ) {
		scanf( "%d", &A[i] );
		++freq[ A[i] ];
	}
	
	int mid = ( n + 1 ) / 2;
	
	for ( int i = 0; i < n; ++i ) {
		if ( freq[ A[i] ] > mid ) {
			printf( "NO\n" );
			return 0;
		}
	}
	
	printf( "YES\n" );
	
	return 0;
	
}