#include <stdio.h>
 
#define STRSIZE 11
 
int main()
{
	char str[ STRSIZE ];
 
	fgets( str, STRSIZE, stdin );
 
	printf( "%s\n", str );
 
	return 0;
}
