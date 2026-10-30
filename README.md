# experiencia-pratica-2-algoritmos
Desenvolvimento da Experiência Prática II (Sistema Bancário em C) para a disciplina de Algoritmos e Pensamento Computacional - Cruzeiro do Sul.
# Experiência Prática II - Algoritmos e Pensamento Computacional

Este repositório contém o desenvolvimento do algoritmo em linguagem C para o simulador de caixa eletrônico interactivo, desenvolvido para a disciplina de Algoritmos e Pensamento Computacional na Universidade Cruzeiro do Sul.

## 📋 Cenário e Desafio Selecionado

**Cenário 4: Sistema Bancário**
O objetivo é desenvolver um programa funcional em C que simule a interface interativa de um caixa eletrônico básico. O sistema gerencia uma conta bancária através de um menu dinâmico e contínuo, permitindo as seguintes ações:
- **1. Consultar Saldo:** Exibe o saldo atual em conta.
- **2. Realizar Depósito:** Adiciona valores ao saldo existente.
- **3. Realizar Saque:** Deduz valores do saldo (com validação de limite).
- **4. Sair do Sistema:** Finaliza a aplicação de forma segura.

## 🔍 Planejamento Estrutural da Etapa Inicial

A sequência lógica programada para esta primeira fase do sistema segue as seguintes diretrizes técnicas:
1. **Inicialização:** Configuração das variáveis essenciais (`opcao`, `saldo` e `valor_operacao`).
2. **Mensagem de Introdução:** Exibição do cabeçalho de boas-vindas contextualizado no terminal.
3. **Menu Interativo (Laço de Repetição):** Implementação da estrutura de loop contínuo `do-while` para manter a aplicação rodando.
4. **Controle de Saída:** Validação da opção de encerramento seguro (Opção 4) e tratamento inicial de entradas inválidas.
