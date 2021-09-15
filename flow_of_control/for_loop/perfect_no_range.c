// Find all the perfect no. in the given range .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i , j , c=0;

    printf(" Write the starting range : ");
    scanf("%d",&a);

    printf(" Write the ending range : ");
    scanf("%d",&b);

    for ( i = a; i <= b ; i++)
    {
        c = 0 ;
        for ( j = 1 ; j <= i ; j++)
        {
            if (i%j==0)
            c++;
        }        
    }


    if (c == i*2)
    {
        printf("%d",i);
    }
    
    



    getch();

    
    
    return 0;
}
