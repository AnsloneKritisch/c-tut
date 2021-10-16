// WAP a program to find a number is prime no. or not : 

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , c=0 ;

    printf("Enter the no. : ");
    scanf("%d",&a);

    i = 1 ;
    while (i <= a )
    {
        if (a%i == 0)
        {
            c++ ;
        }
        i++ ;
    }
    if (c==2)
    {
        printf("%d is a Prime Number \n ", a );
    }
    else printf("%d is not a Prime Number \n ", a );

    getch();
    
    return 0;
}
