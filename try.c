#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , j, i, count, sum = 0;

    printf("Enter the starting range : ");
    scanf("%d",&a);
    
    printf("Enter the ending range : ");
    scanf("%d",&b);

    printf("The Prime Numbers in the range %d and %d are : "
    )
    
    for(i=a; i<=b ; ++i)
    {
        count = 0;
        for(j=1; j<= i; j++)
        {
            if( i % j == 0)
            {
                count++;
            }
        }
        if(count==2)
        printf(" %d \n ", i );
    }

    return 0;
}