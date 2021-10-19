//WAP to find the factor of all the number given input by the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b[20] , c , i , j ;

    printf("Total 20 number can be take input");

    printf("\n Enter How many numbers you want to take input : ");
    scanf("%d",&a);

    for ( i = 1; i <= a; i++)
    {
        printf("Enter the %d) number : ", i );
        scanf("%d",b[i]);
    }

    for ( i = 1; i <= a; i++)
    {
        printf("The factors of number %d are : ", b[i] ) ;
        for ( j = 1; j <= b[i] ; j++)
        {
            if(b[i] % j == 0)
            {
                printf("%d",j);
            }
        }   
    }
    
    
    
    return 0;
}
