#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char st1='a' , st2 = 'A';

    if (islower(st1))
    {
        printf("True");
    }
    else printf("False");

    if (islower(st2))
    {
        printf("True");
    }
    else printf("False");
    
    
    getch();
    return 0;
}
