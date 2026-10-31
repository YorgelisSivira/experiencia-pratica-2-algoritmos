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

        // Estrutura de decisão (Switch-Case) para processar as opções do menu
        switch (opcao) {
            case 1:
                // Opção 1: Consulta de Saldo
                printf("\n--- CONSULTA DE SALDO ---\n");
                printf("Seu saldo atual é: R$ %.2f\n", saldo);
                break;

            case 2:
                // Opção 2: Realizar Depósito
                printf("\n--- REALIZAR DEPÓSITO ---\n");
                printf("Digite o valor do depósito: R$ ");
                scanf("%f", &valor_operacao);
                
                if (valor_operacao > 0) {
                    saldo = saldo + valor_operacao; // Atualiza o saldo somando o valor
                    printf("Depósito de R$ %.2f realizado com sucesso!\n", valor_operacao);
                } else {
                    printf("Valor de depósito inválido!\n");
                }
                break;

            case 3:
                // Opção 3: Realizar Saque (Com validação do Bônus)
                printf("\n--- REALIZAR SAQUE ---\n");
                printf("Digite o valor do saque: R$ ");
                scanf("%f", &valor_operacao);
                
                // Regra do Bônus: Impedir o saque se o valor for maior que o saldo base
                if (valor_operacao > saldo) {
                    printf("\n[ERRO] Saldo insuficiente para realizar a operação!\n");
                    printf("Seu saldo atual é de apenas: R$ %.2f\n", saldo);
                } else if (valor_operacao <= 0) {
                    printf("Valor de saque inválido!\n");
                } else {
                    saldo = saldo - valor_operacao; // Atualiza o saldo subtraindo o valor
                    printf("Saque de R$ %.2f realizado com sucesso!\n", valor_operacao);
                }
                break;

            case 4:
                // Opção 4: Encerramento do sistema
                printf("\nEncerrando o sistema. Obrigado por utilizar nossos serviços!\n");
                break;

            default:
                // Tratamento de entradas inválidas fora do intervalo 1-4
                printf("\nOpção inválida! Por favor, tente novamente.\n");
                break;
        }

    } while (opcao != 4); // O loop continua rodando enquanto a opção não for 4

    printf("=====================================================\n");
    return 0;
}
