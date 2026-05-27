#include <stdio.h>

int main(){
    int idade;
    do{
        printf("Digite uma idade:\n--> ");
        scanf("%d", &idade);
    }
    while(idade <=-1 && idade <=150);
    return 0;
}