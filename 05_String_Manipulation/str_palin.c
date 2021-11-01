//WAP to check a word is palindrome or not.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st1[100] , st2[100];
    int i , a , c=0 ;

    printf("\n") ;

    printf("Enter the word : ");
    scanf("%s", &st1);

    a = strlen(st1) ;
    strcpy(st2 , st1);
    strrev(st1);

    c=0;
    for(i = 0; i < a ; i++)
    {
        if (st1[i] == st2[i])
        {
            c++;
        }
    }

    printf("\n");
    printf("\n");

    if (a = c)
    {
        printf("%s is a Palindrome String",st1);
    }
    else printf("%s is not a Palindrome String because by reversing it we get %s",st1,st2);

    printf("\n");
    printf("\n");

    getch();
    return 0;
}
