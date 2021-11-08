//WAP to add all two or more digit number.
/*
Riya buy 20 oranges and 50 apples.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100];
    int i , a , c=0 , d=0 ;

    printf(" Enter a sentence : ");
    gets(st);

    a = strlen(st);

    for ( i = a+1 ; i >= 0; i--)
    {
        printf("%c",st[i]) ;
    }

    
    return 0;
}
