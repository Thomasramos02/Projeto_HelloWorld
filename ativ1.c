#include <stdio.h>
#include <stdlib.h>

int main (void){
   int contpar = 0, contimpar = 0, num = 500;
 while(num != 0){
        printf("Entre com um nú..mero para encerrar digite 0:");
        scanf("%d", &num);
        if(num != 0){
            if(num % 2 == 0){
                contpar = contpar + 1;
            }
            else{
                contimpar = contimpar + 1;
            }

        }
    }
   
    
printf("A quantidade de números pares é:%d\n", contpar);
printf("A quantidade de números impares é:%d",contimpar);
}