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
    int i ;

    printf("\n");
    
    printf("Enter a sentence : ");
    gets(st);

    printf("\n");    

    printf(" Input :- \n %s ",st) ;

    printf("\n");    

    printf(" \n Output :- \n ") ;
    for(i=0; st[i]!='\0'; i++)
    {
        if(st[i]==' ')
        {
            printf("\n");
        }
        else printf("%c",st[i]);
    }

    printf("\n");
    printf("\n");
    
    getch();
    return 0;
}
