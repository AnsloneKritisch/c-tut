//WAP to find the factorial of a number 

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , fact = 1 ;

    printf(" Number of factorial you want to find is : ") ;
    scanf("%d",&a) ;

    i = a ;
    while (i >= 1)
    {
        fact = fact * i ;
        i-- ;
    }

    printf("The Value of %d! is = ", a ) ;
    printf("%d \n", fact );

    getch();

    return 0;
}
