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
    printf("\n");

    len = strlen(st);

    printf("Printing the whole sentence in reverse order : \n");

    for ( i = len ; i >= 0 ; i--)
    {
        printf("%s" , st[i]) ;  
    }

    getch();
    return 0;
}
