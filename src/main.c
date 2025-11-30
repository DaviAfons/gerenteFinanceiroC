#include <stdio.h>
#include <stdlib.h>
#include "models.h"
#include "storage.h"
#include "operations.h"
#include "utils.h"

int main() {
    Transacao transacoes[MAX_TRANSACOES];
    int qtd = 0;
    float meta = 0.0;
    int opcao;
    char buffer[10];

    carregarDados(transacoes, &qtd, &meta);

    do {
        printf("\n=== FINANCE MANAGER MODULAR ===\n");
        printf("1. Nova Transacao\n");
        printf("2. Extrato\n");
        printf("3. Saldo\n");
        printf("4. Relatorio Mensal\n");
        printf("5. Metas\n");
        printf("6. Sair\n");
        printf("Opcao: ");
        
        lerString(buffer, 10);
        opcao = atoi(buffer);

        switch (opcao) {
            case 1: adicionarTransacao(transacoes, &qtd); 
            break;
            case 2: listarTransacoes(transacoes, qtd); 
            break;
            case 3: printf("\nSaldo: R$ %.2f\n", calcularSaldo(transacoes, qtd)); 
            break;
            case 4: relatorioMensal(transacoes, qtd); 
            break;
            case 5: gerenciarMeta(transacoes, qtd, &meta); 
            break;
            case 6: salvarDados(transacoes, qtd, meta); 
            break;
            default: printf("Invalido!\n");
        }
    } while (opcao != 6);

    return 0;
}