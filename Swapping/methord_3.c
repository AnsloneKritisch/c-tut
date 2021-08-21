// WAP to swap two numbers
// METHORD 3

#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 10 , b = 20 ;
    b = a+b - (a=b) ;
    
    printf( " The value of a = %d \n " , a) ;
    printf( " The value of b = %d \n " , b) ;

    getch()

    return 0;
}
