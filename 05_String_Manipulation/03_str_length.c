//WAP to count the length of a string .
//strlen -> is a function which calculates the length of string .

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[80] ;
    int a ;

    printf("Enter a sentence : ");
    gets(st);

    a = strlen(st) ;

    printf("\n");

    printf(" The lenght of the string is : %d ",a);

    printf("\n");
    
    getch();
    
    return 0;
}
