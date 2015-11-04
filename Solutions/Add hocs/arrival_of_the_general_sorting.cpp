#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

#define MAXN 100
#define MAXVAL 1000

using namespace std;

int n, tot, max_tot, idx;
int A[MAXN];

int main( ) {

    scanf( "%d", &n );

    for ( int i = 0; i < n; ++i ) {
        scanf( "%d", &A[i] );
    }

    sort( A, A+n );

    idx = 1;
    tot = 1;
    max_tot = 1;

    for ( int i = 1; i < n; ++i ) {
        if ( A[idx] == A[i] ) {
            ++tot;
        }else {
            max_tot = max( max_tot, tot );
            idx = i;
            tot = 1;
        }
    }

    max_tot = max( max_tot, tot );

    if ( max_tot > ( n + 1 ) / 2 ) {
        printf( "NO\n" );
    }else {
        printf( "YES\n" );
    }

    return 0;

}