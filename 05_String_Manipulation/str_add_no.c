//WAP to add all the numbers in a sentence.
/*
Input -> Riya is 12 years old.
Output -> 3
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100];
    int i , c=0 ;

    printf(" \n ");
    printf(" Enter a sentence : ");
    gets(st);

    for ( i = 0; st[i]!='\0'; i++)
    {
        if (st[i]>='0'&& st[i]<='9')
        {
            c+=(st[i]-'0');
        }
        
    }

    printf(" \n ");

    printf(" After adding all the numbers in the sentence ");
    printf(" \n "); 
    printf(" We get : %d ",c);

    printf(" \n "); 
    printf(" \n ");
    
    getch();
    return 0;
}
