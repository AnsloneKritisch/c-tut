//WAP to check a word is palindrome or not.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st1[100] , st2[100];
    int i , a , c ;

    printf("Enter the word : ");
    gets("st1");

    a = strlen(st1) ;
    strcpy(st2 , st1);
    strrev(st1);

    for(i = 0; i < a ; i++)
    {
        if (st2[i] == st1[i])
        {
            c++;
        }
        else printf("%s is not a palindrome");
   

    }
    
    
    return 0;
}
