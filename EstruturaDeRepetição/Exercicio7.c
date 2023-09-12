#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    int total_habitantes = 0;
    int total_feminino_castanhos_castanhos = 0;

    while (1) {
        // Coletar dados do habitante
        printf("Informe o sexo (m/f): ");
        scanf(" %c", &sexo);
        
        // Verificar se o usuário deseja encerrar a pesquisa
        if (idade == -1) {
            break;
        }

        printf("Informe a cor dos olhos (a/v/c/p): ");
        scanf(" %c", &olhos);

        printf("Informe a cor dos cabelos (l/c/p/r): ");
        scanf(" %c", &cabelos);

        printf("Informe a idade em anos: ");
        scanf("%d", &idade);

        printf("Informe o valor do salário: ");
        scanf("%f", &salario);

        // Validar os dados
        if ((sexo == 'm' || sexo == 'f') &&
            (olhos == 'a' || olhos == 'v' || olhos == 'c' || olhos == 'p') &&
            (cabelos == 'l' || cabelos == 'c' || cabelos == 'p' || cabelos == 'r') &&
            (idade >= 10 && idade <= 100) &&
            salario >= 0) {
            
            total_habitantes++;

            // Verificar as condições para contar indivíduos do sexo feminino com olhos e cabelos castanhos na faixa etária
            if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
                total_feminino_castanhos_castanhos++;
            }
        } else {
            printf("Dados inválidos. Por favor, insira os dados novamente.\n");
        }
    }

    // Calcular a porcentagem
    if (total_habitantes > 0) {
        float porcentagem = (float)total_feminino_castanhos_castanhos / total_habitantes * 100;
        printf("Porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagem);
    } else {
        printf("Nenhum dado válido foi inserido.\n");
    }

    return 0;
}
