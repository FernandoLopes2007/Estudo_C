#include <stdio.h>

int main(){
    int nota;
    printf("Digite uma nota:\n--> ");
    scanf("%d", &nota);

    if(nota >=7){
        printf("Aprovado com a nota: %d", nota);
    }else if(nota >=5){
        printf("Recuperacao com a nota: %d", nota);
    }
    else{
        printf("Reprovado com a nota: %d", nota);
    }
    return 0;
}