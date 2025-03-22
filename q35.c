#define PRODUCT(x) ( x * x ) 
main( )
{
int i = 3, j, k ;
j = PRODUCT( i++ ) ; printf("%d",i);
k = PRODUCT ( ++i ) ;printf("%d",i);
printf ( "\n%d %d", j, k ) ;
}
