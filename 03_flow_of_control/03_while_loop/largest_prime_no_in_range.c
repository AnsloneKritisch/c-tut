// WAP to find the largest prime no. in the given range. 

#include <stdio.h>
#include <conio.h>

int main()
{
    int sr , er , i , c=0 , j ;

    printf("Enter the Starting Range : ");
    scanf("%d", &sr);

    printf("Enter the Ending Range : ");
    scanf("%d",&er);

    i = er ;
    while (i>=sr)
    {
        c = 0;
        j = 1 ;
        while (j <= i )
        {
            if (i %j == 0 )

            ++c ;

            j++ ;
        }

        if (c==2)
        {
            printf("The Largest Prime number in the given range is : %d ", i );
            break ;
        }
        
        i--;
    }

    getch();

    return 0;
}
