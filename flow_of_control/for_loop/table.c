// WAP to write a table .

#include <stdio.h>
#include <conio.h>
 
int main() 
{
  int i , a , b , j ;

  printf(" Write the number of tables you want : ") ;
  scanf("%d" , &a ) ;

  for ( i = 1 ; i <= a ; i++)
  {
      for ( j = 1 ; j <= 10 ; j++)
      {
          b = i*j ;

          printf(" %d x %d = %d \n ", i , j , b ) ;

      }
      
  }
  getch() ; 
  
  return 0;
    
}
