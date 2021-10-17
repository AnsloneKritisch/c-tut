//WAP to take input from user and check the numbers are amstrong or not .

#include <stdio.h>
#include <conio.h>

int main()
{
  int a , b[20] , c , i , amg=0 , r ;
  
  printf("Maximum no you can check at a time is = 20 ");
  printf(" \n How Many number you want to add : ");
  scanf("%d", &a );
  
  for (i=0;i<a;i++)
  {
    printf("Enter the %d number : ",i+1);
    scanf("%d",&b[i]) ;
  }
  
  printf("\nThe Amgstrong Numbers Are:");
  
  for(i=0;i<a;i++)
  {
    amg = 0;
    c = b[i] ;
    for(;c>0;)
    {
      r = c % 10 ;
      amg = amg + r*r*r ;
      c = c/10 ;      
    }
    if(amg == b[i])
    {
      printf(" %d , ", b[i] );
    }
  }
  
  getch();
 
  return 0;
}