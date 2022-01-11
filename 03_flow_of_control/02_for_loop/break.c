//WAP to use break function.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;

    printf("Enter a number : ") ;
    scanf("%d",&a) ;

    for ( i = 1 ; i <= a ; i++)
    {
        if (i==5)
        {
            break ;
        }

        else printf(" %d  \n ", i) ;
        
    }

    getch() ;  
    
    return 0;

}
