//WAP to count the length of a string without using strlen function.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[90] ;
    int i , c=0 ;

    printf("Enter a sentence : ");
    gets(st);

    for ( i = 0; st[i]!='\0'; i++)
    {
        c++;  
    }

    printf(" The length of a string is : %d ", c );
    
    
    return 0;
}
