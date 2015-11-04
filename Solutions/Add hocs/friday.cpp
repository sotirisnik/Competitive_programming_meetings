/*
TASK: friday
LANG: C++
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int ans[7];

bool leap( int year ) {
     return ( year % 4 == 0 && ( (year % 100 != 0) || (year % 400 == 0) ) );
}

int n, cur_day;

int main( ) {

    freopen("friday.in","r",stdin);
    freopen("friday.out","w",stdout);
    
    scanf ( "%d", &n );
    
    cur_day = 1;
    
    for ( int i = 1900; i < 1900+n; ++i ) {
        
        days[1] = 28;
        
        if ( leap( i ) ) {
           days[1] = 29;     
        }
        
        for ( int j = 0; j < 12; ++j )
            for ( int k = 0; k < days[j]; ++k ) {
                
                if ( k == 13 ) {
                   ++ans[cur_day];     
                }
                
                ++cur_day;
                cur_day %= 7;            
            }
        
    }
    
    for ( int i = 0; i < 7; ++i )
        printf ( "%d%c", ans[i], ( i == 6 ) ? '\n' : ' ' );
    
    return 0;
    
}