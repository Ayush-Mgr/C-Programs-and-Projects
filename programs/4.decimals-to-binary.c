
#include <stdio.h>

int main() { 
    
    int DeNo , Rem , Val  ;
    printf("input the dec no:");
    scanf ("%d",&DeNo);
    
    while (DeNo != 0){
        
     Rem = DeNo  % 2 ; 
     
     Val = (Rem + Val )*10;
     DeNo /= 2;
       
        }
    Val /= 10;
printf("then binary no is %d",Val );
    return 0;
}
