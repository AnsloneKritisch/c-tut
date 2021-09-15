// Find all the perfect no. in the given range .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i ;

    printf(" Write the starting range : ");
    scanf("%d",&a);

    printf(" Write the ending range : ");
    scanf("%d",&b);

    for ( i = a; i <= b ; i++)
    {
        printf(" %d \n ", i );
        
    }
    



    getch();

    
    
    return 0;
}
