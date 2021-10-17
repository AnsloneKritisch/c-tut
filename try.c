#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , j, i, count, sum = 0;

    printf("Enter the starting range : ");
    scanf("%d",&a);
    
    printf("Enter the ending range : ");
    scanf("%d",&b);
    
    for(i=a; i<=b ; ++i)
    {
        count = 0;
        for(j=1; j<= i; j++)
        {
            if( i % j == 0)
            {
                count++;
                break;
            }
        }
        if(count==2)
        printf("%d", i );
    }

    return 0;
}