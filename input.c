// WAP To take input and do different operations :

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , c , d ;

    printf(" Enter the big number =  " ) ;
    scanf("%d" , &a ) ;

    printf(" Enter the small number =  ") ;
    scanf("%d" , &b ) ;

    c = a + b ;
    printf( " The sum of two given no's are -> %d \n " , c ) ;

    d = b - a ;
    printf(" The difference between two no's are -> %d \n " , d ) ;

    getch() ;
            
    return 0;
}
