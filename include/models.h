#ifndef MODELS_H
#define MODELS_H

#define MAX_TRANSACOES 1000
#define ARQUIVO_DB "transactions.db"
#define ARQUIVO_META "goal.db"

typedef struct {
    char data[12];
    char categoria[50];
    char descricao[100];
    float valor;
    char tipo; // 'R' ou 'D'
} Transacao;

#endif