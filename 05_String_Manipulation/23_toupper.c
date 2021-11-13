// C program to demonstrate
// example of toupper() function.
#include <ctype.h>
#include <stdio.h>

int main()
{
	char ch;

	ch = 'g';
	printf("%c in uppercase is represented as %c",
		ch, toupper(ch));

	return 0;
}
