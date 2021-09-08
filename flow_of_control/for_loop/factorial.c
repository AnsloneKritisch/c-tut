// WAP to find the factorial of a number

#include <stdio.h>
#include <conio.h>

int main()
{
    int i , a , fact = 1 ;

  printf(" Write a starting range = ") ;
  scanf("%d" , &a ) ;

  for ( i = a ; i >= 1 ; i-- )
  {
      fact = fact * i ;
  }

  printf("%d \n " , fact ) ; 
  
  getch() ;
  
  return 0;

}
