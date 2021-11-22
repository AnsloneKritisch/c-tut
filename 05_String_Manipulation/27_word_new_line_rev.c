//WAP to split each word into new line and revrese it .
/*

Input : I am Anslone Kritisch

output:
I
ma
enolsnA
hcsitirK

*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100] , pt[100] , lt[100] ;
    int l , w = -1 ;

    printf("Enter a Sentence : ");
    gets(st);

    printf("\n");
    printf("Input :- \n");
    printf("%s",st);
    printf("\n");
    printf("\n");
    printf("Output :- \n");


    for ( l = 0; st[l]!='\0'; l++)
    {
        pt[l] = st[l] ;    
    }
    pt[l] = 32 ;
    pt[l+1] = '\0' ;

    for ( l = 0; pt[l]!='\0'; l++)
    {
        lt[++w] = pt[l];
        if (pt[l] == 32)
        {
            lt[++w] = '\0' ;
            strrev(lt) ;
            printf("%s\n",lt);
            w = -1 ;
        }
        
    }

    printf("\n");

    getch();
    return 0;
}