#include <stdio.h>
#include <conio.h>
 
int main() 
{
    float fara  , cona ;
    printf("write the temprature = ") ;
    scanf("%f" ,&fara) ;
    cona = ((fara-32)*5)/9 ;
    printf(" The tempratue in centigrade = %f \n " ,cona ) ;

  getch() ; 

  return 0;
    
}