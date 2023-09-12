#include <stdio.h>
int main(){

    float num, n; 

    printf("Digite um numero:");
    scanf("%f", &n);

    num = 1;

    for(int i = 0; i < n; i++)
    {
        printf("%f\n", num);
        num += 2;
    }
    
 return 0;
}