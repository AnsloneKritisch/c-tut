//WAP to find LCM and HCF of a numbers using For-loop.

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
            hcf = i ;
            break;
        }
    }

    product = a*b ;
    
    lcm = product/hcf;

    printf("\n The LCM of %d and %d is : %d ",a,b,lcm);

    getch();
        
    return 0;
}
