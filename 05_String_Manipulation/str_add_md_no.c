//WAP to add all two or more digit number.
/*
Riya buy 20 oranges and 50 apples.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100];
    int i , a , c=0 , d=0 ;

    printf(" Enter a sentence : ");
    gets(st);

    for ( i = 0; st[i]!='\0'; i++)
    {
        if (st[i]>='0' && st[i]<='9')
        {
            d = (st[i]-'0') ;
            c = d*10 + d ;
            
        }
        
    }
    printf("%d",d);


    
    return 0;
}
