#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , j, i, c ;

    printf("Enter the starting range : ");
    scanf("%d",&a);
    
    printf("Enter the ending range : ");
    scanf("%d",&b);

    printf("The Prime Numbers in the range %d and %d are : " , a , b );
    
    for(i=a; i<=b ; ++i)
    {
        c = 0;
        for(j=1; j<= i; j++)
        {
            if( i % j == 0)
            {
                c++;
            }
        }
        if(c == 2)
        printf(" %d ; ", i );
    }

    return 0;
}