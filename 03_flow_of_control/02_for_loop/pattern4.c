//WAP to draw a pattern .
/*

         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********

*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , j , k ;

    printf("Enter the number of pattern : ") ;
    scanf("%d", &a) ;

    for (i = 1; i <= a; i++)
    {
        for ( j = 1; j <= a-i ; j++)
        {
            printf(" ");
        }

        for ( k = 1; k <= i ; k++)
        {
            printf("*") ;
        }

        printf("\n");
        
    }
    getch();
    
    return 0;
}