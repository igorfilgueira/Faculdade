#include <stdio.h>
#include <stdlib.h>
 
int main(){
    float saldoInicial, saldo, deposito;
    int movimento;
 
    saldo = 500;
    printf("Informe o saldo Inicial: ");
    scanf("%f", &saldoInicial);
    saldo += deposito++;
 
    for(movimento =1 ; movimento < 10; movimento++){
                printf("Informe o valor do Deposito: ");
                scanf("%f",&deposito);
                saldo = saldo + deposito;
     }
       
    printf("Saldo Final: %.2f", saldo);
 
return 0;
}