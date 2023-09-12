#include<stdio.h>
int main(){

    int i = 0;
    int num = 1; 

    printf("Os 5 primeiros multiplos de 3 maiores que 0 são: ");

    while (i < 5)
    {
        if (num % 3 ==0)
        {
            printf("%d\n", num);
            i++;
        }
        num++; 
    }
    


 return 0;   
}