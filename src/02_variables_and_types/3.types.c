#include <stdio.h>

void main()
{
    printf(" char        = %d bytes \n"
    " int         = %d byte \n"
    " short int   = %d bytes \n"
    " long int    = %d bytes \n"
    " float       = %d bytes \n"
    " double      = %d bytes \n"
    " long double = %d bytes\n",
        sizeof(char), 
        sizeof(int), 
        sizeof(short int), 
        sizeof(long int), 
        sizeof(float), 
        sizeof(double), 
        sizeof(long double));
}