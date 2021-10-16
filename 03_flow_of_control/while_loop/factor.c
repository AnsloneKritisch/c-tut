//WAP to find all the factors of a number using while-loop .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;

    printf(" Write the number : ") ;
    scanf("%d",&a) ;

    printf(" The Factors of %d are : \n ", a ) ;

    i = 1 ;
    while (i <= a )
    {
        if(a%i==0)
        {
            printf("%d \n ", i ) ;
        }

        i++ ;
    }

    getch() ;  
    
    return 0;

}
