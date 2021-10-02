//WAP to draw a pattern .
/*

*******************
*****************
***************
*************
***********
*********
*******
*****
***
*

*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , j , k ;

    printf("Enter the number : ") ;
    scanf("%d" , &a ) ;

    for ( i = a;  1 <= i ; i-- )
    {
        for ( j=1 ; j <= i - a ; j++)
        {
            printf(" ") ;
        }

        for ( k=1 ; k <= 2*i-1 ; k++)
        {
            printf("*") ;
        }
        printf("\n") ; 
        
        
    }
    
    getch() ;

    return 0;
}
