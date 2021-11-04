//WAP to count number of words in a sentence.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st[100];
    int i , c=0 ;

    printf("\n");

    printf("Enter a sentence : ");
    gets(st);

   for(i=0; st[i]!='\0'; i++)
   {
      printf("%s", st[i]);

      if(st[i]==' ')
      {
         printf("\n");
      }
   }
    
    getch();
    return 0;
}
