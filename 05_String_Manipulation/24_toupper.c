//WAP to illustrate toupper() function.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char ch = 'a';
	printf("\n");
	printf("%c in uppercase is represented as %c",ch,toupper(ch));
	printf("\n");
	getch();
	return 0;
}
