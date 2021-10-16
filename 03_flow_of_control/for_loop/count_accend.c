// WAP to write a program to print numbers from starting range to ending in accending order .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;

    printf("Enter the number : ");
    scanf("%d",&a);

    for ( i = 1 ; i <= a ; i++)
    {
        printf(" %d \n ", i );
    }

    getch();  
    
    return 0;
}
