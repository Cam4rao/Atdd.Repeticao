#include <stdio.h>
int main(){

    int num;
    int i;

    printf("informe um numero:");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Digite um numero maior que 0");
        return 1;
    } 

    printf("Todos os numeros naturais de 0 ate %d\n", num);
    for (i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
    
    
}