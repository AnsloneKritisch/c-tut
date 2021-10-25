//WAP to add all the number in the diagonal of a matrix both side.
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10][10],ro,co,i,j,ldsum=0,rdsum=0;

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

    for(i=0;i<ro;i++)
    {
        for(j=0;j<co;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf(" \n ");
    }
    

    
}