//WAP to find the factor of all the number given input by the user.

#include <stdio.h>
#include <conio.h>

int main()
{
   int a , b[20] , i , j  ;

   printf("Maximum 20 numbers could be taken");

   printf("Enter how many no. : ");
   scanf("%d",&a);
   
   for ( i = 1; i <= a ; i++)
   {
       printf("Enter the %d) number : ", i ) ;
       scanf("%d",&b[i]) ;
   }

    for ( i = 1; i <= a; i++)
    {
        printf("\n The factors of number %d are : ", b[i] ) ;
        for ( j = 1; j <= b[i] ; j++)
        {
            if(b[i] % j == 0)
            {
                printf(" %d ; ", j);
            }
        }   
    }
    
    
    
    return 0;
}
