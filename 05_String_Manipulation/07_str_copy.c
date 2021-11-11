//In the function strcpy(st2,st1); -> st2 is the string in which st1 will be copied.
//WAP to take input string and copy it.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st1[90] , st2[90] ;
    int a ;

    printf("\n");

    printf("Enter the 1st sentence : ");
    gets(st1);

    printf("\n");

    printf("Enter the 2nd sentence : ");
    gets(st2);

    printf("\n");

    //In the function strcpy(st2,st1); -> st2 is the string in which st1 will be copied.
    strcpy(st2,st1);

    printf("After coping the 1st into 2nd :- \n ");
    printf("%s", st2);
    
    printf("\n");
    printf("\n");

    getch();
    return 0;
}
