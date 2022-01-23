//WAP to find the smallest number among the number input by the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b[20] , i , j , sml ;

    printf("Enter How many numbers : ");
    scanf("%d",&a);

    for ( i = 1; i <= a; i++)
    {
        printf("Enter %d) Number : ", i );        
        scanf("%d",&b[i]);
    }

    sml = b[0] ;

    for ( i = 1 ; i <= a ; i++)
    {
        if ( b[i] < sml )
        {
            sml = b[i] ;
        }
    }

    printf("\n The Smallest Number is = %d ", sml );

    getch();

    return 0;
}
