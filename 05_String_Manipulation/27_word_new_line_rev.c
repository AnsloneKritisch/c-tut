#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100] , pt[100] , lt[100] ;
    int l , w = -1 ;

    printf("Enter a Sentence : ");
    gets(st);

    for ( l = 0; st[l]!='\0'; l++)
    {
        pt[l] = st[l] ;    
    }
    pt[l] = 32 ;
    pt[l+1] = '\0' ;

    printf("%s",pt) ;

    

    getch();
    return 0;
}
