// WAP to write a table .

#include <stdio.h>
#include <conio.h>
 
int main() 
{
  int i , a , b , c , j ;

  printf(" Write the number of tables you want : ") ;
  scanf("%d" , &a ) ;

  printf(" Write the number til which you want the table : ");
  scanf("%d" , &c) ;

  for ( i = 1 ; i <= a ; i++)
  {
      for ( j = 1 ; j <= c ; j++)
      {
          b = i*j ;

          printf(" %d x %d = %d \n ", i , j , b ) ;

      }

      printf("\n");
      
  }
  getch() ; 
  
  return 0;
    
}
