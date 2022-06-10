#include <stdio.h>
#include <math.h>

int main(){
    float nota;

    printf("Digita a media final \n");
    scanf("%f",&nota);
    if (nota >= 7){
        printf("Aprovado. \n");
    }else{
        if(nota >= 4)
            printf("Exame \n");
        else{
            printf("Reprovado \n");
        }
    }
}