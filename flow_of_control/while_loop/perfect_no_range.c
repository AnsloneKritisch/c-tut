// Find all the perfect no. in the given range.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i , j , c=0 ;

    printf(" Write the Starting Range : ");
    scanf("%d",&a);

    printf(" Write the Ending Range : ");
    scanf("%d",&b);


    i = a ;
    while (i <= b )
    {
        c = 0 ;
        j = 1 ;
        while (j <= i)
        {
            if (i%j==0)
            {
                c = c+j ;
            }
            j++ ;            
        }

        i++ ;    
    }

    if (c == i*2 )
    {
        printf("%d \n ", i );
    }

    getch();
    
    return 0;
}
