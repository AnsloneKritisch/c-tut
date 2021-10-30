//strcat   ->	Appends one string at the end of another

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

    strcat(st1 , st2 );

    printf("\n");

    printf("After coping the 1st sentence into 2nd sentence : ") ;
    printf("%s",st1);

    printf("\n");
    

    printf("After coping the 1st sentence into 2nd sentence : ") ;
    printf("%s",st2);

    printf("\n");
    

    getch();
    return 0;
}
