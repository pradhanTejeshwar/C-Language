main( )
{
float a = 13.5 ; 
float *b, *c ;
b = &a ; /* suppose address of a is 1006 */
c = b ;
printf ( "\n%u %u %u", &a, b, c ) ;
printf ( "\n%f %f %f %f %f", a, *(&a), *&a, *b, *c ) ;
}

