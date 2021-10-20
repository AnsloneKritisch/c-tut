//WAP to find LCM and HCF of a number using While-loop.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , c , i , product , hcf , lcm ;

    printf("Enter a number : ");
    scanf("%d",&a);

    printf("Enter another number : ");
    scanf("%d",&b);

    c = a+b ;

    i = 2 ;
    while (i<=c)
    {
        if (a%i==0 && b%i==0)
        {
            printf("The HCF of %d and %d is = %d ",a,b,i);
            hcf = i ;
            break ;
        }
        
        i++;
    }
    
    
    return 0;
}
