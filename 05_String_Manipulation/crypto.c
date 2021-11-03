//WAP to do a cyptographical work (It is mainly ).

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100] ;
    int i;

    printf(" Enter the sentence : ");
    gets(st);

    for ( i = 0; st[i]!='\0'; i++)
    {
        if (st[i]>=65 && st[i]<90)
        {
            st[i]=st[i] + 1 ;
        }
        else if (st[i] == 90)
        {
            st[i] = 65 ;
        }
        else
        {
            printf("Something went wrong+")
        }
        
        

    }
    



    
    return 0;
}
