#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100] , pt[100] ;

    printf("Enter a word in Upper case : ");
    gets(st);

    printf("Enter a word in Lower case : ");
    gets(pt);

    if (strcmpi(st,pt)==0)
    {
        printf(" Yes %s and %s are same ",st,pt);
    }
    else printf(" No %s and %s are different ",st,pt);

    printf("\n");
    
    getch();
    return 0;
}
