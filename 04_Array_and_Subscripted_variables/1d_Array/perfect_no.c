// Perfect no. is a no. whose factor sum is equal to 2*the no.
// example ->  6 =1,2,3,6 =1+2+3+6=12,-> 6*2=12
// WAP to find a number is perfect or not .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b[20] , i , j , c , d ;

    printf("Enter how many no. : ");
    scanf("%d",&a);

    for ( i = 1; i <= a ; i++)
    {
        printf("Enter the %d) number : ", i ) ;
        scanf("%d",&b[i]) ;
    }

    printf("\n All the Perfect numbers are : ");

    for ( i = 1; i <= a ; i++)
    {
        c = 0 ;

        for ( j = 1; j <= b[i] ; j++)
        {
            if (b[i] % j == 0 )
            {
                c = c+j;
            }
            
        }
        
    d = b[i] * 2 ;
        
    if ( c == d)
        
    {
        printf(" %d ; ", b[i] );
    }

    }

    getch();

    return 0;
      
}