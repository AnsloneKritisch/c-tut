// WAP to change tempratue from degree centigrade to farhanhite and vize - versa

#include <stdio.h>
#include <conio.h>

int main()
{

    // Conversion fron Centigrade to Farhanite

    float con = 36.8 , far ;
    far = (con * 9) / 5 + 32 ;
    printf( " The temprature in farenhite = %f \n ", far ) ;
    
    // Conversion from Farhanite to Centigrade

    float fara = 99.2 , cona ;
    cona = ((fara-32)*5)/9 ;
    printf(" The tempratue in centigrade = %f \n " ,cona ) ;
    
    return 0;


}

