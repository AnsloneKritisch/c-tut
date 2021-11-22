#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100] , pt[100] , lt[100] , a[80] , b[80];
    int l , w = -1 ;

    printf("Enter a Sentence : ");
    gets(st);

    printf("Enter the word want to replace : ");
    gets(a);

    printf("Enter the new word want to add : ");
    gets(b);

    for ( l = 0; st[l]!='\0'; l++)
    {
        pt[l] = st[l] ;
    }
    pt[l] = 32 ;
    pt[l+1] = '\0' ;

    for ( l = 0; pt[l]!='\0'; l++)
    {
        lt[++w] = pt[l] ;
        if (pt[l]==32)
        {
            lt[++w] = '\0' ;
            if (strcmpi(lt , a) == 0)
            {
                printf("%s",b);
                w = -1 ;
            }
            else
            {
                printf("%s",lt);
                w = -1 ;
            }
            
        }
        
    }
    
    

    getch();
    return 0;
}
