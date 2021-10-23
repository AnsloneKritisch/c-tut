// Matrix form is mainly a 2d Array.
//WAP to take input a 2d array and print it out.

#include <stdio.h>
#include <conio.h>

int main()
{
    int ro , co , a[20][20] , i , j ;

    printf("Enter number of rows : ");
    scanf("%d",&ro);
    
    printf("Enter number of column : ");
    scanf("%d",&co);

    for ( i = 0; i < ro; i++)
    {
        for ( j = 0; j < co; j++)
        {
            printf("Enter the %d row and %d column : ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf(" The Matrix we get : ");

    for ( i = 0; i < ro; i++)
    {
        for ( j = 0; j < co; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf(" \n ")
        
    }

    
    
    
    return 0;
}
