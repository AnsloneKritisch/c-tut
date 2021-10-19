//WAP to find LCM and HCF of a numbers.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , c , i , product , hcf , lcm ;

    printf("Enter a number : ");
    scanf("%d", &a );

    printf("Enter another number : ");
    scanf("%d",&b);

    c = a+b ;

    for ( i = 2; i <= c; i++)
    {
        if(a%i == 0 && b%i ==0)
        {
            printf("The HCF of %d and %d is = %d ",a,b,i);
            lcm = i ;
            break;
        }
    }

    printf(" \n %d", lcm);

    product = a*b ;
    hcf = product ;
        
    return 0;
}
