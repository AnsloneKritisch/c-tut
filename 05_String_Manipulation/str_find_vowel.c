//WAP to find all the vowels in a sentence.

#include <stdio.h>

int main()
{
  int c = 0, count = 0;
  char st[100];

  printf("Enter the Sentence : ");
  gets(st);

  while (st[c] != '\0')
   {
       if (st[c] == 'a' || st[c] == 'A' || st[c] == 'e' || st[c] == 'E' || st[c] == 'i' || st[c] == 'I' || st[c] =='o' || st[c]=='O' || st[c] == 'u' || st[c] == 'U')
       {
           count++;
           c++;
       }
   }

  printf("Number of vowels in the string: %d", count);

  return 0;
}

