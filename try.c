//WAP to split each word into new line.
/*
Input : I am Anslone Kritisch

output:
 I
 am
 Anslone
 Kritisch

*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100];
    int i , c=0 ;

    printf("\n");
    
    printf("Enter a sentence : ");
    gets(st);

    for(i=0; st[i]!='\0'; i++)
    {
        if(st[i] >= '0' && st[i] <= '9')
        {
            c = c + st[i] ;
        }
    }
    
    printf("%d",c);
    
    printf("\n");
    printf("\n");
    
    getch();
    return 0;
}
