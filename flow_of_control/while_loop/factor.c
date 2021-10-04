//WAP a program to find factor using while-loop .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , i ;

    printf("Enter a number : ") ;
    scanf("%d",&a) ;

    i = 1 ;
    while (i <= a )
    {
        printf("%d",i) ;

        i++ ;

    }

    getch() ;  
    
    return 0;

}
