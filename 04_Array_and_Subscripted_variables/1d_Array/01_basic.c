// WAP to show basic program for array.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10] , no , i ;

    printf("Enter how many no. : ");
    scanf("%d",&no);

    for ( i = 0; i < no ; i++)
    {
        printf("Enter the %d) number : ", i+1 ) ;
        scanf("%d",&a[i]) ;
    }
    printf("The array is : ");
    for ( i = 0; i < no ; i++)
    {
        printf(" \n %d ",a[i]);
    }
    
    getch();
       
    return 0;
}
