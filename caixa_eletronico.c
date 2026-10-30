#include <stdio.h>

int main() {
    // Declaração das variáveis do sistema bancário
    int opcao = 0;
    float saldo = 500.00; // Saldo base inicial simulado
    float valor_operacao = 0.0;

    // Mensagem de introdução contextualizada (Apresentação do Sistema)
    printf("=====================================================\n");
    printf("         SISTEMA BANCÁRIO - CAIXA ELETRÔNICO         \n");
    printf("=====================================================\n");

    // Laço de repetição para manter o menu interativo contínuo
    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Consultar Saldo\n");
        printf("2. Realizar Depósito\n");
        printf("3. Realizar Saque\n");
        printf("4. Sair do Sistema\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Estrutura inicial de controle de saída
        if (opcao == 4) {
            printf("\nEncerrando o sistema. Obrigado por utilizar nossos serviços!\n");
        } else if (opcao < 1 || opcao > 4) {
            printf("\nOpção inválida! Por favor, tente novamente.\n");
        }

    } while (opcao != 4); // O loop continua rodando enquanto a opção não for 4

    printf("=====================================================\n");
    return 0;
}
