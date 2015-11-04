#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

#define MAXN 100000

using namespace std;

int n, cnt1, cnt2;
char a[MAXN+1], b[MAXN+1];

int main( ) {
	
	scanf( "%s %s", a, b );
	
	n = strlen( a );
	
	for ( int i = 0; i < n; ++i ) {
		if ( a[i] != b[i] ) {
			if ( a[i] == '4' ) {
				++cnt1;
			}else {
				++cnt2;
			}
		}
	}
	
	printf( "%d\n", max( cnt1, cnt2 ) );
	
	return 0;
	
}