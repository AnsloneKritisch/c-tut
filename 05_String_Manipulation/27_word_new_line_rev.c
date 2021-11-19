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
    int i , j , a , b ;

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
        else 
        {
            j = i ;
            b = 1 ;
            while (j<b)
            {
                printf("%s",st[j]);
                j-- ;
            }
            
        }
    }

    printf("\n");
    printf("\n");
    
    getch();
    return 0;
}
