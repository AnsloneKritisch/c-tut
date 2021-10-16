// Basic way of writting a for loop statment
// WAP to print your name as many times as you want .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;
    
    printf(" Write how many times you want to print your number = ");
    scanf( "%d" , &a );
    
    for ( i = 1; i <= a; i++)
    {
        printf("\n Anshu \n") ;
    }

    getch() ;

    return 0;
}
