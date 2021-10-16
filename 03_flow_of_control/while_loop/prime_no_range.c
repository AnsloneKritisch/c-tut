//WAP to find all prime no in the given range .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i , j , c=0 ;

    printf(" Enter the Starting range : ");
    scanf("%d",&a);

    printf(" Enter the Ending range : ");
    scanf("%d",&b);

    i = a ;
    while (i <= b )
    {
        c = 0 ;
        
        j = 1 ;
        while (j <= i)
        {
            if (i%j == 0)
            {
                c = c + 1 ;
            }
            if (c == 2)
            {
                printf("%d \n " , i ) ;
            }
            j++;
        }
        i++ ;
    }

    getch();
    
    return 0;
}
