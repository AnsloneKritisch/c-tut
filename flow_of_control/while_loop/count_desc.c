//WAP to Count the number descending order 

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i ;

    printf("Enter the Starting Range : ") ;
    scanf("%d",&a);

    printf("Enter the Ending Range : ");
    scanf("%d",&b);

    i = a ;

    while (i>=b)
    {
        printf("%d \n ",i);
        i-- ;
    }

    getch();
    
    return 0;
}
