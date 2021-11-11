//WAP to reverse a function without using strrev function.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[90] ;
    int i , len ;

    printf("Enter a sentence : ");
    gets(st);

    printf("\n");

    len = strlen(st);

    printf("Printing the whole sentence in reverse order : ");

    for ( i = len ; i >= 0 ; i--)
    {
        printf("%c" , st[i]) ;  
    }

    printf("\n");

    getch();
    return 0;
}
