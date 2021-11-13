//WAP to illustrate tolower() function.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char ch = 'A';
    printf("\n");
	printf("%c in uppercase is represented as %c",ch,tolower(ch));
	printf("\n");
	getch();
	return 0;
}
