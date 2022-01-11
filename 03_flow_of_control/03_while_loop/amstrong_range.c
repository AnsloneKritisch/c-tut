//WAP to find all the Amstrong Number between the given range.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i , j , r , amg ;

    printf("Enter the starting range : ");
    scanf("%d",&a);

    printf("Enter the ending range : ");
    scanf("%d", &b );

    printf("All the Amstrong Number in the given range is : ");

    i = a ;

    while (i<=b)
    {
        amg = 0 ;
        j = i ;

        while (j>0)
        {
            r = j%10 ;
            amg = amg + (r*r*r) ;
            j = j/10 ;
        }

        if (amg == i)
        {
            printf(" \n %d ", i );
        }

        i++ ;        
    }

    getch();

    return 0;
}
