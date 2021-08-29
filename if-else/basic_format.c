#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b ;

    printf("Write a number :");
    scanf("%d" , &a ) ;
    
    printf("Write a number :");
    scanf("%d" , &b ) ;

    if ( a > b)
    {
        printf(" Yes a > b ")
    }
    else
    printf(" No b > a ") ;

    getch() ;

    return 0;
}
