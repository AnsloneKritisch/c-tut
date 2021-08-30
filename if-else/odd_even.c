// WAP to find a number which is odd or even .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a ;

    printf(" Enter the number ") ;
    scanf("%d" , &a ) ;

    if ( a % 2 == 0 )
    {
        printf(" It is an even number ") ;
    }
    else
    printf(" It is an odd number ") ;

    getch() ;
  
    return 0;
}
