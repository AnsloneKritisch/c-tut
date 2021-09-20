#include <stdio.h>
#include <conio.h>
int main()
{
  int no,p,r,amg=0;

  printf("enter the number :");
  scanf("%d",&no);

  p=no;

  for(;p>0;)
  {
    r = p%10 ;
    amg = amg + (r*r*r) ;
    p=p/10 ;
  }
  if (amg == no)
  {
    printf("%d is a Amgstrong no", no) ;
  }
  else
  printf("%d is not a amstrong no",no);

  getch();
  
  return 0;
}