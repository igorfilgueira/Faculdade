#include <stdio.h>
#include <math.h>

int main(){
    float valor;
    printf("Digite um numero: \n");
    scanf("%f", &valor);
    if (valor > 0){
            printf("O numero e positivo.\n");
        }
    else {
        if (valor < 0){
            printf("O numero e negativo.\n");
            }
            if (valor == 0){
                printf("O numero nao e positivo nem negativo. \n");
            }
        }
}