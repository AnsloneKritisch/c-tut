// WAP a program to use switch command and find your day .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a ;

    printf(" Choose a number between 1 to 3 . \n I will tell how is going to be next day .") ;
    printf("Write a number") ;
    scanf("%f" , &a ) ;

    switch (a)
    {
    case 1 :
    printf(" Have a nice day ") ;
    break;
    
    case 2 :
    printf(" Have a normal day ") ;
    break;
    
    case 3 :
    printf(" Have a bad day ") ;
    break;
    
    default:
    printf(" You Thought a number out of the box ") ;
    break;
    }

    return 0;
    
} 
