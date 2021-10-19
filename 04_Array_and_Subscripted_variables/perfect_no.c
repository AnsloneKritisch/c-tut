// Perfect no. is a no. whose factor sum is equal to 2*the no.
// example ->  6 =1,2,3,6 =1+2+3+6=12,-> 6*2=12
// WAP to find a number is perfect or not .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , j=0 , b ;

    printf(" Write the no. = ");
    scanf("%d" , &a );

    for ( i = 1; i <= a ; i++)
    {
        if (a%i==0)
        {
            j=j+i ;
        }
                
    }
    
    b = a*2 ;

    if ( j == b)
    {
        printf(" %d is a Perfect Number \n ", a );
    }
    else printf(" %d is not a Perfect Number \n ", a );

    getch();

    return 0;
      
}