//WAP to reverse a sentence.
/*
 Input :  Riya is a good girl.
Output :  .lrig doog a si ayiR
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100];
    int i , a , c=0 , d=0 ;

    printf("\n");

    printf(" Enter a sentence : ");
    gets(st);
    
    a = strlen(st);
    
    printf(" After reversing the sentence we get : ");

    for ( i = a; i >= 0; i--)
    {
        printf("%c",st[i]) ;
    }

    printf("\n");

    getch();
    return 0;
}
