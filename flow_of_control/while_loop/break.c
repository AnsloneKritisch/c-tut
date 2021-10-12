//WAP to use break function.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i ;

    printf("Enter the number till which you want the loop : ") ;
    scanf("%d",&a);

    printf("Enter the number on which you want to break loop : ");
    scanf("%d",&b);

    i = 1 ;
    while (i <= a)
    {
        if (i == b )
        {
            break ;
        }

        else printf(" %d \n ", i );
        
        i++ ;
    }
    
    
    return 0;
}
