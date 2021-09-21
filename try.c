#include <stdio.h>
#include <conio.h>

int main()
{
  int a , b ,i ,amg ,j , r ;

  printf("Enter a the starting range :");
  scanf("%d",&a);

  printf("Enter the ending range :");
  scanf("%d",&b);
  printf("The Amgstrong Numbers Are:");
  for ( i = a; i <= b ; i++)
  {
    amg=0 ;
    j = i  ;
    for (;j>0;)
    {
      r = j%10 ;
      amg = amg + (r*r*r) ;
      j = j/10 ; 
    }
   if (i == amg )
   {
     printf("%4d",i) ;
   }
  }

  getch() ;
  return 0;
}