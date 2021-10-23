//WAP to take input a Matrix and print all the prime number in the matrix.

#include <stdio.h>
#include <conio.h>

int main()
{
    int ro , co , a[20][20] , i , j , k , c , d ;

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

    printf(" All the Prime numbers we get from the Matrics are : ");

    for ( i = 0; i < ro; i++)
    {
        for ( j = 0; j < co; j++)
        {
            d = a[i][j] ; 
            c = 0 ;
            for ( k = 1; k <= d ; k++)
            {
                if (d % k == 0 )
                {
                    c++ ;
                }
            }
            if (c == 2)
            {
                printf(" %d ; ", a[i][j]);
            }    
        }
        
    }


    getch();
    
    return 0;
}
