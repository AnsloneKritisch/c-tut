// Basic way of writting a while loop statment
// WAP to print your name as many times as you want.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;
    char b ;

    printf(" Write how many times you want to print your name : ");
    scanf("%d",&a);

    printf(" Enter your Name : ") ;
    scanf("%s", &b ) ;

    i = 1 ;
    while (i <= a)
    {
        printf(" \n ", b ) ;

        i++ ;

    }

    getch() ;
    
    return 0;
}
