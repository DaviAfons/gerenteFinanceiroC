#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operations.h"
#include "utils.h"

void adicionarTransacao(Transacao transacoes[], int *qtd) {
    if (*qtd >= MAX_TRANSACOES)
    {
        printf("Erro: Banco de dados cheio.\n");
        return;
    }

    Transacao *t = &transacoes[*qtd];
    char bufferValor[20];

    printf("\n--- Nova Transacao ---\n");
    printf("Tipo (R - Receita / D - Despesa): ");
    scanf(" %c", &t->tipo);
    getchar();

    printf("Data (DD/MM/AAAA): ");
    lerString(t->data, 12);

    printf("Categoria: ");
    lerString(t->categoria, 50);

    printf("Descricao: ");
    lerString(t->descricao, 100);

    printf("Valor: ");
    lerString(bufferValor, 20);
    t->valor = atof(bufferValor);

    (*qtd)++;
    printf("Registro adicionado com sucesso!\n");
}

void listarTransacoes(Transacao transacoes[], int qtd) {
    printf("\n%-12s | %-3s | %-10s | %-15s | %s\n", "Data", "T", "Valor", "Categoria", "Descricao");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < qtd; i++) {
        printf("%-12s | %-3c | %7.2f | %-15s | %s\n",
               transacoes[i].data, transacoes[i].tipo, transacoes[i].valor,
               transacoes[i].categoria, transacoes[i].descricao);
    }
}

float calcularSaldo(Transacao transacoes[], int qtd) {
    float saldo = 0;
    for (int i = 0; i < qtd; i++) {
        if (transacoes[i].tipo == 'R' || transacoes[i].tipo == 'r') saldo += transacoes[i].valor;
        else saldo -= transacoes[i].valor;
    }
    return saldo;
}

void relatorioMensal(Transacao transacoes[], int qtd) {
    char mesAno[8];
    float r = 0, d = 0;
    printf("\nMes/Ano (MM/AAAA): ");
    lerString(mesAno, 8);

    for (int i = 0; i < qtd; i++) {
        if (strstr(transacoes[i].data, mesAno)) {
            if (transacoes[i].tipo == 'R' || transacoes[i].tipo == 'r') r += transacoes[i].valor;
            else d += transacoes[i].valor;
        }
    }
    printf("Receitas: %.2f | Despesas: %.2f | Liquido: %.2f\n", r, d, r - d);
}

void gerenciarMeta(Transacao transacoes[], int qtd, float *meta) {
    float saldo = calcularSaldo(transacoes, qtd);
    char buf[20];
    printf("\nMeta: %.2f | Atual: %.2f\n", *meta, saldo);
    
    if (*meta > 0) {
        printf("Progresso: %.1f%%\n", (saldo / *meta) * 100);
    }

    printf("Definir nova meta? (S/N): ");
    char op;
    scanf(" %c", &op);
    getchar();
    if (op == 'S' || op == 's') {
        printf("Valor: ");
        lerString(buf, 20);
        *meta = atof(buf);
    }
}