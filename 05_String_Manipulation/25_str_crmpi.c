#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100] , pt[100] ;

    printf("Enter a word : ");
    gets(st);

    printf("Enter a word : ");
    gets(pt);

    if (strcmpi(st,pt)==0)
    {
        printf("Yes")
    }
    else printf("No")
    
    getch();
    return 0;
}
