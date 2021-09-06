// WAP to write a program to print numbers from 1 to 10 both accending and decending order .

#include <stdio.h>
#include <conio.h>
 
int main() 
{
  int i , a , b ;

  printf(" Write a range ") ;
  scanf("%d" , &a ) ;

  for (i = 1; i <= a ; ++i )
  {
    printf("%d \n ", i);
  }

  getch() ; 

  return 0;
    
}
