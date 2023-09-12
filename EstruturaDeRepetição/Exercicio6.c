#include <stdio.h>
int main(){

    char *frutas[] = {"ABACAXI", "MACA", "PERA"};
    float precos[] = {5.00, 1.00, 2.00};

    int escolha;
    float total = 0;

    while (1){

        printf("Menu de frutas \n 1- Abacaxi 5.00 a unidade \n 2- Maca 1.00 a unidade \n 3- Pera 2.00 a unidade \n 4- Finalizar compra\n");
        printf("Escolha a fruta desejada(1-3): ");
        scanf("%d", &escolha);

        if (escolha < 1 || escolha > 3)
        {
            if (escolha == 4)
            {
                break;
            } else {
                printf("Opção invalida. Escolha novamente.\n"); 
                continue;
            }
            
        }
        int quantidade;
        printf("Quantas unidades de %s voce deseja comprar?", frutas [escolha - 1]);
        scanf("%d", &quantidade);

        if (quantidade < 0){
            printf("Quantidade invalida.Escolha novamente.\n");
        } else {
            total += precos [escolha - 1] * quantidade;
        }

        printf("O total da sua compra eh: R$%.2f\n", total);
        
    }
    return 0;
}