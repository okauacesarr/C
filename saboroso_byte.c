#include <stdio.h>
#include <locale.h>

//Autor: Kauã César Ramos de Oliveira

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    
    float conta_base = 100.0;  
    float gorjeta = 0.0;        
    float gorjeta_ajustada = 0.0;
    float total_final = 0.0;
    int estoque = 50;         
    int forma_pagamento;        

    
    gorjeta = conta_base * 0.10;  

    
    printf("=== Lanchonete Saboroso Byte ===\n");
    printf("Conta base: R$ %.2f\n", conta_base);
    printf("Gorjeta padrão (10%%): R$ %.2f\n\n", gorjeta);
    printf("Escolha o método de pagamento:\n");
    printf("1 - Dinheiro (desconto 5%% na gorjeta)\n");
    printf("2 - Cartão (sem ajuste)\n");
    printf("3 - Pix (desconto 10%% na gorjeta)\n");
    printf("4 - Vale-alimentação (acréscimo 8%% na gorjeta)\n");
    printf("Opção: ");
    scanf("%d", &forma_pagamento);

    
    switch (forma_pagamento) {
        case 1:
            gorjeta_ajustada = gorjeta * 0.95;  
            printf("\nPagamento em dinheiro: desconto de 5%% na gorjeta aplicado.\n");
            break;
        case 2:
            gorjeta_ajustada = gorjeta;         
            printf("\nPagamento em cartão: sem ajuste na gorjeta.\n");
            break;
        case 3:
            gorjeta_ajustada = gorjeta * 0.90;  
            printf("\nPagamento via Pix: desconto de 10%% na gorjeta aplicado.\n");
            break;
        case 4:
            gorjeta_ajustada = gorjeta * 1.08;  
            printf("\nPagamento com vale-alimentação: acréscimo de 8%% na gorjeta aplicado.\n");
            break;
        default:
            gorjeta_ajustada = gorjeta;
            printf("\nMétodo de pagamento não incentivado. Sem ajustes aplicados.\n");
            break;
    }

    
    estoque -= 1;

    
    total_final = conta_base + gorjeta_ajustada;

    
    printf("\n==== RESUMO FINAL ====\n");
    printf("Valor da conta base: R$ %.2f\n", conta_base);
    printf("Gorjeta ajustada: R$ %.2f\n", gorjeta_ajustada);
    printf("Total a pagar: R$ %.2f\n", total_final);
    printf("Estoque restante: %d itens\n", estoque);

    return 0;
}
