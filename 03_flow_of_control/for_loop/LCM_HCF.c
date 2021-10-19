//WAP to find LCM and HCF of a numbers.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , c , i , p , h , l ;

    printf("Enter a number : ");
    scanf("%d", &a );

    printf("Enter another number : ");
    scanf("%d",&b);

    c = a+b ;

    for ( i = 1; i <= c; i++)
    {
        if(a%i == 0 && b%i ==0)
        {
            printf("The HCF of %d and %d is = %d ",a,b,i);
            break;
        }
    }
        
    return 0;
}
