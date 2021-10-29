//WAP to count the length of a string without using strlen function.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[90] ;
    int i , a ;

    printf("Enter a sentence : ");
    gets(st);

    for ( i = 0; st[i]!='\0'; ++i)
    {
        printf("%c \n " , st[i]) ;  
    }
    
    
    return 0;
}
