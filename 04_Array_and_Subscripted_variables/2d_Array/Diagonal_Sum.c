//WAP to add all the sum
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10][10],ro,co,i,j,ldsum=0,rdsum=0;
    printf("Enter The Number Of Rows:");
    scanf("%d",&ro);
    printf("Enter The Number Of Columns:");
    scanf("%d",&co);
    printf("Enter The Numbers:");
    for(i=0;i<ro;i++)
    {
        for(j=0;j<co;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
