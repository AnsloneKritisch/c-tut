//WAP to append or add one string on another without using strcat function. 

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
   char st1[90] , st2[90] , st3[90] ;
    int i , a , b , c , j ;

    printf("\n");

    printf("Enter the 1st sentence : ");
    gets(st1);

    printf("\n");

    printf("Enter the 2nd sentence : ");
    gets(st2);

    a = strlen(st1);
    b = strlen(st2);
    c = a+b ; 

    i = 0;
    while (st1[i] != '\0')
    {
		st3[j] = st1[i];
		i++;
		j++;
    }

    i = 0;
	while (st2[i] != '\0')
    {
		st3[j] = st2[i];
		i++;
		j++;
	}
	st3[j] = '\0';
      
    

    printf("After Appending or Adding the 2nd sentence into 1st sentence : ") ;
    printf("%s",st3);

    getch();
    return 0;
}
