// WAP a program to find a number is prime no. or not 

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , c = 0 ;

    printf(" Enter a the no : ") ;
    scanf("%d" , &a ) ;

    for ( i = 1 ; i <= a ; i++)
    {
        printf("%d", i ) ;
        if (a%i == 0)
        {
            ++c ;
        }
        
    }
    if (c==2)
    {
        printf(" Print %d is a prime no. " , a ) ;
    }

    
    
    
    return 0;
}
