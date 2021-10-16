// WAP to reverse a number.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , rev=0 , r , p ;

    printf("Enter a number : ");
    scanf("%d",&a);

    while (a>0)
    {
        r = a % 10 ;
        rev = rev*10 + r ;
        a = a/10 ;
    }

    printf(" Reversed Number : %d \n ", rev );

    getch();

    return 0;
}
