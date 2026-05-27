#include <stdio.h>

int main(){
    float n, total;
    while(n != 0){
        printf("Digite um numero:\n--> ");
        scanf("%f", &n);
        total = total + n;
        printf("Digite 0 para parar\n");
    }
    printf("Total: %f", total);
    return 0;
}