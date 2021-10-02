// WAP to draw a pattern .
/*

1
12
123
1234
12345
123456
1234567
12345678
123456789
12345678910

*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , j ;

    printf("Enter the number : ") ;
    scanf("%d", &a) ;

    for (i = 1; i <= a; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }

        printf("\n");
        
    }
    
    getch();
    
    return 0;
}
