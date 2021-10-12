//WAP to use break function.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;

    printf("Enter a number : ") ;
    scanf("%d",&a);

    i = 1 ;
    while (i <= a)
    {
        if (i == 5 )
        {
            break ;
        }

        else printf(" %d \n ", i );
        
        i++ ;
    }
    
    
    return 0;
}
