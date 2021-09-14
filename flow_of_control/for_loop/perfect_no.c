// Perfect no. is a no. whose factor sum is a 2*the no.
// example ->  6 =1,2,3,6 =1+2+3+6=12,-> 6*2=12
// WAP to find a number is perfect or not .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;

    printf(" Write the no. = ");
    scanf("%d" , &a );

    for ( i = 1; i <= a ; i++)
    {
        printf("%d",i) ;
    }
    
    
    return 0;
}
