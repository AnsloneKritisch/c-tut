// Basic way of writting a while loop statment
// WAP to print your name as many times as you want.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;

    printf(" Write how many times you want to print your name : ");
    scanf("%d",&a);

    i = 1 ;
    while (i <= a)
    {
        printf("\n Anshu \n");
        i++ ;
    }
    
    getch() ;
    
    return 0;
}
