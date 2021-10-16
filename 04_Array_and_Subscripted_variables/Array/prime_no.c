//WAP to check that the given numbers by the user are prime number or not .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b[20] , k , i , j , c=0 ;

    printf("\n Total 20 number you can take ");
    printf("\n How many no.s you want to check :  \n");
    scanf("%d",&a);

    for ( i = 1; i <= a ; i++)
    {
        printf(" Enter the %d) number : \n");
        scanf("%d",&b[i]);
    }

    for ( i = 1; i <= a ; i++)
    {
        k = b[i] ;
        c = 0 ;

        for ( j = 1 ; j <= k ; i++)
        {
            if (k % j == 0)
            {
                c = c+1 ;
            }
            if (c==2)
            {
                printf("\n %d is a Prime Number \n ", k );
            }
            else printf("\n %d is not a Prime Number \n ", k)    
        }
    }
    getch(); 
    
    return 0;
}
