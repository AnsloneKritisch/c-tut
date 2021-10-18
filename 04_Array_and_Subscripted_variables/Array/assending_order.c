//WAP to arrange all the numbers in Assending order.

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
            big = a[i] ;
        }
    }

    printf("%d",big);

    
    return 0;
}
