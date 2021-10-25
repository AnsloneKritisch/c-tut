//WAP to add all the number in the diagonal of a matrix both side.

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10][10] , ro , co , i , j , n1 , n2 , copy ;

    printf("Enter The Number Of Rows:");
    scanf("%d",&ro);

    printf("Enter The Number Of Columns:");
    scanf("%d",&co);

    printf(" \n ");
    printf(" \n ");

    for(i=0;i<ro;i++)
    {
        for(j=0;j<co;j++)
        {
            printf("Enter The %d Row and %d Column : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf(" \n ");
    printf(" \n ");

    printf("The Matrix we got here is : \n ");

    for(i=0;i<ro;i++)
    {
        for(j=0;j<co;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf(" \n ");
    }

    // Loop of Diagonal sum 

     for( i=0; i<=ro; i++)
    {
        for( j=0; j<co; j++)
        {
            if(i==j)
            {
                n1 = a[i][j];
                copy = n1 ;
            }

            if(i+j==ro-1)
            {
                n2 = a[i][j];
                n1 = n2 ;
                n2 = copy ;
            }
        }
    }

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

    

    printf(" \n ");
    printf(" \n ");
    
    getch();

    return 0 ;
}