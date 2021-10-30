//WAP to take input string and copy it without using the strcopy function.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st1[90] , st2[90] ;
    int i , a ;

    printf("\n");

    printf("Enter the 1st sentence : ");
    gets(st1);

    printf("\n");

    printf("Enter the 2nd sentence : ");
    gets(st2);

    a = strlen(st1);

    for ( i = 0; i >= a ; ++i)
    {
        st2[i] = st1[i];  
    }

    

    printf("After coping the 1st sentence into 2nd sentence : ") ;
    printf("%s",st1);


    getch();
    return 0;
}
