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


    for ( i = 1 ; i <= a ; i++)
    {
        if ( b[i] < b[i+1] )
        {
            b[i] = b[i+1] ;
        }
    }

    printf("Arrange in assending order : ");

     for ( i = 1; i <= a; i++)
    {
        printf(" %d ;", b[i] );        
    }
    

    getch();

    return 0;
}
