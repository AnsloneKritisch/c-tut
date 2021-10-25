//WAP to interchange the row .

#include <stdio.h>
#include <conio.h>

int main()
{
    int ro , co , a[20][20] , i , j , n1 , n2 , copy ;

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

    printf(" The Matrix we get is : \n ");

    for ( i = 0; i < ro; i++)
    {
        for ( j = 0; j < co; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf(" \n ");
        
    }

    printf("Enter which two row want to be changed : ");
    scanf("%d %d", &n1 , &n2 );

    for ( i = 0; i <= ro ; i++)
    {
        copy = a[n1 - 1][i];
        a[n1 - 1][i] = a[n2 - 1][i];
        a[n2 - 1][i] = copy ;
    }

     printf("Matrix after row exchange:\n");
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
