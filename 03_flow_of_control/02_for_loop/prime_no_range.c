//WAP to find all prime no in the given range .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , b , c , j ;

    printf(" Enter the Starting range : ") ;
    scanf("%d" , &a ) ;

    printf(" Enter the Ending range : ") ;
    scanf("%d" , &b ) ;

    printf("The Prime Number in the range %d and %d are : ", a , b );

    for ( i = a ; i <= b ; i++)
    {
        c = 0 ;
        for ( j = 1 ; j <= i ; j++)
        {
            if (i % j == 0 )
            {
                c++ ;
            }
        }
        if (c==2)
        {
            printf(" %d ; ", i );
        }    
    }
    
    getch() ;

    return 0;
}
