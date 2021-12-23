// WAP to change tempratue from degree centigrade to farhanhite and vize - versa

#include <stdio.h>
#include <conio.h>

int main()
{

    // Conversion fron Centigrade to Farhanite

    float con , far ;
    printf(" write the temprature = ") ; 
    scanf("%f",&con);
    far = (con * 9) / 5 + 32 ;
    printf( " The temprature in farenhite = %f \n ", far ) ;
    
    getch() ; 

 /*   // Conversion from Farhanite to Centigrade

    float fara  , cona ;
    prinf("write the temprature = ") ;
    scanf("%f" ,&fara)
    cona = ((fara-32)*5)/9 ;
    printf(" The tempratue in centigrade = %f \n " ,cona ) ;
*/
    getch() ; 
    
    return 0;


}

