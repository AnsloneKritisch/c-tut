#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char st = 'a' ;

    tolower(st);

    printf("%c",st);
    
    return 0;
}
//WAP to illustrate toupper() function.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char ch = 'a';
	printf("%c in uppercase is represented as %c",ch,toupper(ch));
	printf("\n");
	getch();
	return 0;
}
