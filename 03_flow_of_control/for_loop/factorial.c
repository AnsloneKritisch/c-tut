// WAP to find the factorial of a number

#include <stdio.h>
#include <conio.h>

int main()
{
    int i , a , fact = 1 ;

  printf(" Number of factorial you want to find is : ") ;
  scanf("%d" , &a ) ;

  for ( i = a ; i >= 1 ; i-- )
  {
      fact = fact * i ;
  }

  printf("The Value of %d! is = ", a ) ;
  printf("%d \n " , fact ) ; 
  
  getch() ;
  
  return 0;

}
