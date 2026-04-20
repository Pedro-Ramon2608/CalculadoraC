#include <stdio.h>
#include <stdlib.h>

int calculadora() {
    printf("<-- Calculadora C --> \n");
    printf("Operações Disponíveis: \n");
    printf("    1 - Soma \n");
    printf("    2 - Subtração \n");
    printf("    3 - Multiplicação \n");
    printf("    4 - Divisão \n");
    printf("    0 - Encerrar Programa \n\n");
    return 0;  
}

int main() {
    calculadora();

    int escolha;
    float num1;
    float num2;
    float resultado;

    while (1) {
        printf("Escolha a operação (1/ 2/ 3/ 4/ 0): ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Encerrando... Até breve! \n");
            system("pause");
            break;
        }

        if (escolha == 1 || escolha == 2 || escolha == 3 || escolha == 4) {

            printf("Digite o primeiro valor: ");
            scanf("%f", &num1);

            printf("Digite o segundo valor: ");
            scanf("%f", &num2);
            
        } else {
            printf("Valor inválido, escolha uma opção disponível \n");
            continue;
        }

        if (escolha == 1) {
            resultado = num1 + num2;
            printf("Resultado: %0.2f + %0.2f = %0.2f \n\n", num1, num2, resultado);
            continue;
        }

        else if (escolha == 2) {
            resultado = num1 - num2;
            printf("Resultado: %0.2f - %0.2f = %0.2f \n\n", num1, num2, resultado);
            continue;
        }

        else if (escolha == 3) {
            resultado = num1 * num2;
            printf("Resultado: %0.2f * %0.2f = %0.2f \n\n", num1, num2, resultado);
            continue;
        }

        else if (escolha == 4) {
            if (num2 == 0) {
                printf("Não é possível dividir por 0! \n\n");
                continue;
            } else {
                resultado = num1 / num2;
                printf("Resultado: %0.2f / %0.2f = %0.2f \n\n", num1, num2, resultado);
                continue;
            }
        }
    }

    return 0;
}