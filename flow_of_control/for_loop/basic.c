// Basic way of writting a for loop statment
// WAP to print your name as many times as you want .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;
   // char b ;

    printf(" Write how many times you want to print your number = ");
    scanf( "%d" , &a );
    
    //printf(" Write your name = ");
    //scanf( "%s" , &b );

    for ( i = 1; i <= a; i++)
    {
        //printf("%s",b);
        printf(" A \n ") ;
    }

    getch() ;

    return 0;
}
