//WAP to take input a Matrix and print all the prime number in the matrix.

#include <stdio.h>
#include <conio.h>

int main()
{
    int ro , co , a[20][20] , i , j , s ;

    printf("Enter number of rows : ");
    scanf("%d",&ro);
    
    printf("Enter number of column : ");
    scanf("%d",&co);

    printf(" \n ");
    printf(" \n ");

    for ( i = 0; i < ro; i++)
    {
        for ( j = 0; j < co; j++)
        {
            printf("Enter the %d row and %d column : ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf(" \n ");
    printf(" \n ");

    printf(" The Matrix we get is : \n ");

    for ( i = 0; i < ro; i++)
    {
        for ( j = 0; j < co; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf(" \n ");
        
    }

    printf(" \n ");
    printf(" \n ");


    for ( i = 0; i < ro; i++)
    {
        for ( j = 0; j < co; j++)
        {
            s = s + a[i][j] ;
        }
        printf(" The sum of all the numbers in %d row is = %d ", i+1 , s ) ;
        s = 0 ;        
    }

    printf(" \n ");
    printf(" \n ");

    getch();
    
    return 0;
}
