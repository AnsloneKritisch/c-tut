//WAP to find all prime no in the given range .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , b , c = 0 ,j ;

    printf(" Enter a the starting range : ") ;
    scanf("%d" , &a ) ;

    printf(" Enter a the ending range : ") ;
    scanf("%d" , &b ) ;

    for ( i = a ; i <= b ; i++)
    {
        c == 0 ;
        for ( j = 1 ; j <= i ; j++ )
        {
            if ( i % j == 0 )
            {
                ++c ;
            }
        }
        if (c == 2)
        {
            printf("%d" , i) ; 
        }

    }
    
    getch() ;

    return 0;
}
