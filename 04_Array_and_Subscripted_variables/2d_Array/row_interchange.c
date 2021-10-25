//WAP to interchange row of a matrix given input by the user .

#include <stdio.h>
#include <conio.h>

int main()
{
    int ro , co , a[20][20] , i , j , n1 , n2 , copy ;

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

    printf(" Which two rows would you like to change ? \n");
    printf(" Original row : ");
    scanf("%d",&n1);

    printf(" Row need to be interchange : ");
    scanf("%d",&n2 );

    for ( i = 0; i <= ro ; i++)
    {
        copy = a[n1 - 1][i];
        a[n1 - 1][i] = a[n2 - 1][i];
        a[n2 - 1][i] = copy ;
    }

    printf(" \n ");
    printf(" \n ");
    
    printf("Matrix after row exchange : \n ");
    for ( i = 0; i < ro; i++)
    {
        for ( j = 0; j < co; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf(" \n ");
    }

    printf(" \n ");

    getch();
    return 0;
}
