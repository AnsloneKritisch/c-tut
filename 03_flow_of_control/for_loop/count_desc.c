// WAP to write a program to print numbers from starting range to ending in decending order .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;

    printf("Write the number : ");
    scanf("%d",&a);

    for ( i = a; i >= 1 ; i--)
    {
        printf("%d \n ", i );
    }
    
    
    return 0;
}
