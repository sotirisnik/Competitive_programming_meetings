#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <algorithm>

using namespace std;

int n, x;
list <int> orig, target;

void print_list( list<int> &l ) {
	for ( list<int>::iterator pos = l.begin(); pos != l.end(); ++pos ) {
		printf( "%d ", *pos );
	}
	printf( "\n" );
}

int main( ) {
	
	scanf( "%d", &n );
	
	for ( int i = 0; i < n; ++i ) {
			scanf( "%d", &x );
			orig.push_back( x );
	}
	
	for ( int i = 0; i < n; ++i ) {
		scanf( "%d", &x );
		target.push_back( x );
	}
	
	print_list( orig );
	print_list( target );
	
	int i = 0;
	
	for ( list<int>::iterator pos = target.begin(); pos != target.end(); ++pos ) {
		list<int>::iterator tmp = find( orig.begin(), orig.end(), *pos );
		
		list<int>::iterator orig_iter = orig.begin();
		advance( orig_iter, i );
		
		//cout << *orig_iter << " " << *tmp << endl;
		
		++tmp;
		reverse( orig_iter, tmp );
		
		print_list( orig );
		
		++i;
	}
	
	cout << "final" << endl;
	
	print_list( orig );
	
	return 0;
	
} 