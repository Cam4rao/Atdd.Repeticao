#include<stdio.h>
int main(){

    int soma = 0; 
    int i = 0;
    int num = 2;

    while (i < 50)
    {
        soma += num;
        num += 2;
        i++;
    }
    
    printf("A soma dos primeiros 50 numeros pares maiores que 0 :%d\n", soma);
    return 0;
}