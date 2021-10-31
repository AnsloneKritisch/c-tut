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

   for(i=0; st1[i]!='\0'; ++i); 
   {
       for(j=0; st2[j]!='\0'; ++j, ++i)
       {
           st1[i]=st2[j];
       }
   }
   
   
    

    printf("After Appending or Adding the 2nd sentence into 1st sentence : ") ;
    printf("%s",st1);

    getch();
    return 0;
}
