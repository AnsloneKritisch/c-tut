// WAP to find all the factors of a number .

#include <stdio.h>
#include <conio.h>
 
int main() 
{
  int i , a ;

  printf(" Write the number : ") ;
  scanf("%d" , &a ) ;
    
  for (i = 1 ; i <= a ; ++i )
  {
    if (a%i == 0)
    {
        printf("%d \n " , i ) ;
    }    
  }

  getch() ; 

  return 0;
    
}