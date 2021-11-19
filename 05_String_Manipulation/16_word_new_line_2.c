#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100] , pt[100] ;
    int l , w= -1 ;

    printf(" Enter a string : ");
    gets(st) ;

    for( l = 0; st[l]!='\0'; l++)
    {
        pt[l] = st[l];
    }
    pt[l] = 32 ;
    pt[l+1] = '\0' ;

    printf("%s",pt);

    for( l = 0; pt[l]!='\0'; l++)
    {
        st[++w] = pt[l];
        if (pt[l]==' ')
        {
            st[w] = '\0';
        }
        printf("\n %s",st );
       
        w = -1 ;
    }
    
    
    
    return 0;
}
