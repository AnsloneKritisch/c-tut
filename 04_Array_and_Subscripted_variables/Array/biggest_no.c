//WAP to find the biggest number among the number input by the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b[20] , i , j , big ;

    printf("Enter How many numbers : ");
    scanf("%d",&a);

    for ( i = 1; i <= a; i++)
    {
        printf("Enter %d) Number : ", i );        
        scanf("%d",&b[i]);
    }

    big  = b[0] ;

    for ( i = 1 ; i <= a ; i++)
    {
        if (b[i]>big)
        {
            big = b[i] ;
        }
    }

    printf("The Biggest Number is = %d ", big );

    getch();

    return 0;
}
