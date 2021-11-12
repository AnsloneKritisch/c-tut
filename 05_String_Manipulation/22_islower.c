//WAP to check that an alphabet is lower case or not.

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char st1='a' , st2 = 'A';

    if (islower(st1))
    {
        printf("True \n");
    }
    else printf("False \n ");

    if (islower(st2))
    {
        printf("True \n");
    }
    else printf("False \n");
    
    getch();
    return 0;
}
