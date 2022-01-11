// WAP to write a table .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i , j , c ;

    printf(" Write the number of table you want : " ) ;
    scanf("%d" , &a) ;

    printf(" Write the number till which you want the table : " );
    scanf("%d", &c ) ;
    

    i = 1 ;
    while (i <= a)
    {
        j = 1 ;
        while (j <= c)
        {
            b = i*j ;

            printf("%d X %d = %d \n ", i , j , b ) ;

            j++ ;

        }

        printf("\n");

        i++ ;
        
    }

    getch() ;    
    
    return 0;
}
