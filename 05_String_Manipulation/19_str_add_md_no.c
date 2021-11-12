//WAP to add all two or more digit number.
/*
Riya buy 20 oranges and 50 apples.
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int a , b ;
    char st[100];

    printf(" Enter the sentence : ");
    gets(st);

    for ( i = 0; st[i]!='/0'; i++)
    {
        if (st[i]==" " && st[i+1]>=48 && st[i+1]<=57)
        {
            printf(st[i+1]);
        }
        
    }
    
    
    
    return 0;
}
