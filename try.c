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
    
    printf("The Numbers:\n");
    for(i=0;i<ro;i++)
    {
        for(j=0;j<co;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

for(i=0;i<=ro;i++)
{
for(j=0;j<co;j++)
{
if(i==j)
ldsum=ldsum+a[i][j];
if(i+j==ro-1)
rdsum=rdsum+a[i][j];
}
}
printf("\nThe Left Diagonal Sum is=%d",ldsum);
printf("\nThe Right Diagonal Sum is=%d",rdsum);
getch();
return 0;
}