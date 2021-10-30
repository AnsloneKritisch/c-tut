//strcat   ->	Appends one string at the end of another

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
   char st1[90] , st2[90] , st3[90] ;
    int i , a ;

    printf("\n");

    printf("Enter the 1st sentence : ");
    gets(st1);

    strcpy(st3 , st1) ;

    printf("\n");

    printf("Enter the 2nd sentence : ");
    gets(st2);

    strcat(st1 , st2 );

    printf("\n");

    printf("After Appending or Adding the 2nd sentence into 1st sentence : ") ;
    printf("%s",st1);

    printf("\n");
    printf("\n");
    
    strcat(st2 , st3 );

    printf("After  Appending or Adding the 1st sentence into 2nd sentence : ") ;
    printf("%s",st2);

    printf("\n");
    

    getch();
    return 0;
}
