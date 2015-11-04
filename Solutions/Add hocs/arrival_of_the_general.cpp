#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

#define MAXN 100

using namespace std;

int n, min_idx, max_idx;
int H[MAXN+1];

int main( ) {
	
	scanf( "%d", &n );
	
	for ( int i = 1; i <= n; ++i ) {
		scanf( "%d", &H[i] );
	}
	
	max_idx = min_idx = 1;
	
	for ( int i = 2; i <= n; ++i ) {
		if ( H[i] > H[max_idx] ) {
			max_idx = i;
		}
		if ( H[i] <= H[min_idx] ) {
			min_idx = i;
		}
	}
	
	printf( "%d\n", abs( min_idx - n ) + abs( max_idx - 1 ) + ( min_idx < max_idx ? -1 : 0 ) );
	
	return 0;
	
}