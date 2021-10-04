//WAP to count a number in acesnding order.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i , b ;

    printf("Enter the starting range : ") ;
    scanf("%d",&a) ;
    
    printf("Enter the ending range : ") ;
    scanf("%d",&b) ;

    i = a ;
    
    while (i <= b )
    {
        printf("%d \n ",i) ;

        i++ ;

    }

    getch() ;  
    
    return 0;

}

