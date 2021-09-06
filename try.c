#include <stdio.h>
#include <conio.h>
 
int main() 
{
    int i , a , b ;

  printf(" Write a starting range = ") ;
  scanf("%d" , &a ) ;

  printf(" Write the ending range =  ") ;
  scanf("%d" , &b) ;

  for ( i = a ; i >= b ; i-- )
  {
      printf("%d \n " , i ) ; 
  }

  getch() ; 

  return 0;
    
}