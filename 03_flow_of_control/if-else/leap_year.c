// WAP to find a leap year or not 

#include <stdio.h>
#include <conio.h>

int main()
{
    int a ;

    printf(" Write the year = ") ;
    scanf( "%d" , &a ) ;

    if ( a % 400 == 0 )
    {
        printf(" It is a Leap Year \n ") ;
    }
    else
    printf(" It is not a Leap Year \n ") ;

    getch() ;
       
    return 0;
}
