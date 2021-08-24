// WAP To take input and do different operations :

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , c , d , e ;

    printf(" Enter the big number = \n " ) ;
    scanf("%d" , &a ) ;

    printf(" Enter the small number = \n ") ;
    scanf("%d" , &b ) ;

    c = a + b ;
    printf( " The sum of two given no's are -> %d \n " , c ) ;

    d = b - a ;
    printf(" The difference between two no's are -> %d \n " , d ) ;

    e = b % a ;
    printf(" The divide between two no is = \n " , e ) ;


    getch() ;
            
    return 0;
}
