//WAP to check that the given numbers by the user are prime number or not .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b[20] , i , j , c=0 ;

    printf("Total 20 number you can take ");
    printf("\n How many no.s you want to check : ");
    scanf("%d",&a);

    for ( i = 1; i <= a ; i++)
    {
        printf(" Enter the %d) number : ", i );
        scanf("%d",&b[i]);
    }

    printf("The Prime Numbers are : ");
    
    for ( i = 1; i <= a ; i++)
    {
         c = 0 ;
        for ( j = 1 ; j <=b[i]  ; i++)
        {
           
            if (b[i] % j == 0)
            {
                c++ ;
            }    
        }
        if (c==2)
            {
                printf("%d ; ", b[i]  );
            }
            
    }
    getch(); 
    
    return 0;
}
