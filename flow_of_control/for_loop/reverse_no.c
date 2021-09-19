// WAP to reverse a number .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , rev , r , p ;

    printf("Enter a number : ");
    scanf("%d",&a);

    for (;a>0;)
    {
        r = a%10 ;
        rev = rev*10 + r ;
        a = a/10 ;
    }

    printf("The reverse of a number %d",rev);

    
    
    
    
    
    getch();

    return 0;
}
