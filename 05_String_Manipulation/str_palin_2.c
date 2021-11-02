//WAP to check a word is palindrome or not.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100] , st2[100];
    int i , j , a , c=0 ;

    printf("\n") ;

    printf("Enter the word : ");
    scanf("%s", &st);

    for ( j = 0; st[j]!='\0'; ++j)
    {
        for ( i = 0; i < j/2; i++)
        {
            if (st[j-i-1] == st[i])
            {
                c = 1 ;
            }
            else 
            c = 0;
            break;
        }
        
    }
    
    if (c>0)
    {
        printf("%s is a Palindrome String",st);
    }
    else printf(" %s is not a Palindrome String ",st);

    printf("\n");
    printf("\n");

    getch();
    return 0;
}
