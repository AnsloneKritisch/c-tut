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

    printf(" Enter a sentence : ");
    gets(st);

    for ( i = 0; st[i]!='\0'; i++)
    {
        if (st[i]>='0'&& st[i]<='9')
        {
            c+=(st[i]-'0');
        }
        
    }
    printf(" After adding all the numbers in the sentence \n");
    printf(" We get : %d ",c);
    

    return 0;
}
