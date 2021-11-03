//WAP to find all the vowels in a sentence.

#include <stdio.h>

int main()
{
    char line[100];
    int i , vowels , consonant , digit , space ;


  for (int i = 0; line[i] != '\0'; ++i)
   {
       if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
       line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
       line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
       line[i] == 'U')
       {
           ++vowels;
       }
       else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            ++consonant;
        } 
        else if (line[i] >= '0' && line[i] <= '9')
        {
            ++digit;
        } 
        else if (line[i] == ' ')
        {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);

  return 0;
}

