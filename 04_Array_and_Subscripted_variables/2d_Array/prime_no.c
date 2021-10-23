//WAP to take input a Matrix and print all the prime number in the matrix.

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

    printf(" \n ")

    printf(" The Matrix we get is : \n ");

    for ( i = 0; i < ro; i++)
    {
        for ( j = 0; j < co; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf(" \n ");
        
    }

    getch();
    
    return 0;
}
