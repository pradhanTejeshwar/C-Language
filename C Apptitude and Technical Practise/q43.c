main( )
{
int n[3][3] = {
2, 4, 3,
6, 8, 5,
3, 5, 1
} ;
int i, j ;
for ( i = 0 ; i <= 2 ; i++ )
for ( j = 0 ; j <= 2 ; j++ )
printf ( "\n%d %d", n[i][j], *( *( n + i ) + j ) ) ;
}

