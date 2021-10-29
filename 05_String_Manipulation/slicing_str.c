//WAP to print all the string one by one.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[90] ;
    int i ;

    printf("Enter a sentence : ");
    gets(st);

    printf("\n");
    printf("\n");

    printf("Printing the whole sentence in alphabet : \n");

    for ( i = 0; st[i]!='\0'; ++i)
    {
        printf("%c \n " , st[i]) ;  
    }

    getch();
    return 0;
}
