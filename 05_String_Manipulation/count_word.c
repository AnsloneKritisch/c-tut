//WAP to count number of words in a sentence.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100];
    int i , c=0 ;

    printf("Enter a sentence : ");
    gets(st);

    for ( i = 0; st[i]!='\0'; i++)
    {
        if (st[i] == ' ')
        {
            c++;
        }
    }

    printf("%d",c+1);
    
    getch();
    return 0;
}
