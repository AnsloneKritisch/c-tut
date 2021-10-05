//WAP to Count the number descending order 

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i ;

    printf("Enter the Number : ") ;
    scanf("%d",&a);

    i = a ;

    while (i>=1)
    {
        printf("%d \n ",i);
        i-- ;
    }

    getch();
    
    return 0;
}
