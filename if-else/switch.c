/*

// WAP write a program to find . 
   1
#include <stdio.h>
 
int main () {

   
   char grade ;

   printf(" Write Which Grade You Got (A,B,C,D) = ");
   scanf("%s" , &grade);

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

/*

// Writing the above program in if - else statment

#include <stdio.h>
#include <conio.h>

int main()
{
   char  grade ;

   printf(" Enter your grade = ") ;
   scanf ("%s" , &grade) ;

   if ( "grade" == "A" && "grade" == "A")
   {
      printf( " You get Excellent Marks \n " ) ; 
   }
   else if ("grade" == "B" && "grade" == "b")
   {
      printf(" You got a good marks \n ") ;
   }
   else if ("grade" == "C" && "grade" == "c")
   {
      printf("Well Done You got nice marks \n ") ;
   }
   else if ("grade" == "D" && "grade" == "d")
   {
      printf("You are just passed \n ") ;
   }
   else if ("grade" == "F" && "grade" == "f")
   {
      printf(" Better Luck Next Time \n ") ;
   }
   else
   {
      printf(" You are worthless you can't Type you grade \n ") ;
   }

   getch() ;
   
   return 0;
}

*/
