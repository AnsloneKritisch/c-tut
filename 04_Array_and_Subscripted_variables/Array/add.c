// WAP a program to take input number according to the wish of the user and add them.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b[20] , c=0 , i ;

    printf("Maximum Number you can take = 20 ");
    printf("Enter How many number you want to take : ");
    scanf("%d",&a);

    for ( i = 1 ; i <= a ; i++)
    {
        printf("Enter the %d) Number = ",i);
        scanf("%d",&b[i]);
    }

    for ( i = 1; i <= a ; i++)
    {
        c = c + b[i] ;
    }
    
    printf("The sum of %d numbers given by user is = %d ",a,c);

    getch();
      
    return 0;
}
