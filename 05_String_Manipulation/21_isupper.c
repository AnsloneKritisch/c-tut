#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char st1='a' , st2='A' ;


    if (isupper(st1))
    {
        printf("True \n");
    }
    else printf("False\n");
    
    if (isupper(st2))
    {
        printf("True\n");
    }
    else printf("False\n");
    
    getch();    
    return 0;
}
