//WAP to reverse a string .

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[90] ;
    int a ;

    printf("Enter the sentence : ");
    gets(st);

    strrev(st);

    printf("\n");
    printf("Reversing the sentence : ");
    printf(" %s ",st);
    printf("\n");
    printf("\n");

    getch();
    return 0;
}
