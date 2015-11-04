#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

#define MAXN 50

using namespace std;

int n, m;
char a[MAXN+1][MAXN+1];
bool first;
int min_x, max_x, min_y, max_y;

int main( ) {
	
	scanf( "%d %d", &n, &m );
	
	for ( int i = 0; i < n; ++i ) {
		scanf( "%s", a[i] );
	}
	
	first = true;
	
	for ( int i = 0; i < n; ++i ) {
		for ( int j = 0; j < m; ++j ) {
			if ( a[i][j] == '*' ) {
				if ( first ) {
					min_x = max_x = i;
					min_y = max_y = j;
					first = false;
				}else {
					min_x = min( min_x, i );
					max_x = max( max_x, i );
					min_y = min( min_y, j );
					max_y = max( max_y, j );
				}
			}
		}
	}
	
	for ( int i = min_x; i <= max_x; ++i ) {
		for ( int j = min_y; j <= max_y; ++j ) {
			printf( "%c", a[i][j] );
		}
		printf( "\n" );
	}
	
	return 0;
	
}