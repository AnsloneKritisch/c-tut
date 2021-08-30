// Basic format and program of using if and else statment 
// WAP to find which number is Bigger 

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b ;

    printf("Write a number(A) :");
    scanf("%d" , &a ) ;
    
    printf("Write a number(B) :");
    scanf("%d" , &b ) ;

    if ( a > b)
    {
        printf(" Yes A > B ") ;
    }
    else
    printf(" No B > A ") ;

    getch() ;

    return 0;
}
