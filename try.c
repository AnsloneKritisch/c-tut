#include <stdio.h>
#include <conio.h>
#include  <string.h>

int main()
{
    char st[100];
    int i , c = 0 ;
 
    printf("Enter a sentence : ");
    gets(st);

    for ( i = 0; st[i]!='\0'; i++)
    {
        if (st[i]>='0' && st[i]<='9')
        {
            c+=(st[i] -'0');
        }
        
    }
    printf(" %d ",c);
    
    return 0;
}
