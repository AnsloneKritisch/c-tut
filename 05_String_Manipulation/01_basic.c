/* 

For string we use gets() in place of scanf() because in a sentence there are gaps
and scanf() terminates at the gap and no further word is printed.

gets() don't terminate at gaps and print both space and the full sentence without terminateing any thing. 

*/

//WAP to take input string and print it.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st1[90] , st2[90] ;

    printf("Enter the sentence : ");
    gets(st1);

    printf("\n");
    printf("\n");

    printf(" Printing the sentence using gets() function we get : \n %s ", st1 ) ;

    printf("\n");
    printf("\n");

    printf("Enter another sentence : ");
    scanf("%s", &st2);

    printf("\n");
    printf("\n");

    printf(" Printing the sentence using scanf() function we get : \n %s ", st2 ) ;

    printf("\n");
    printf("\n");

    getch();

    return 0;
}
