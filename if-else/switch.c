// WAP a program to use switch command and find your day .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a ;

    printf(" Choose a number between 1 to 3 . \n I will tell how is going to be next day .") ;
    printf("Write a number") ;
    scanf("%f" , &a ) ;

    switch (a)
    {
    case "1" :
    printf(" Have a nice day ") ;
    break;
    
    case "2" :
    printf(" Have a normal day ") ;
    break;
    
    case "3" :
    printf(" Have a bad day ") ;
    break;
    
    default:
    printf(" You Thought a number out of the box ") ;
    break;
    }




    return 0;
} 

/* #include <stdio.h>
 
int main () {

   
   char grade = 'B';

   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );
 
   return 0;
} 
*/
