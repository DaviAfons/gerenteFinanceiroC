#ifndef OPERATIONS_H
#define OPERATIONS_H
#include "models.h"

void adicionarTransacao(Transacao transacoes[], int *qtd);
void listarTransacoes(Transacao transacoes[], int qtd);
float calcularSaldo(Transacao transacoes[], int qtd);
void relatorioMensal(Transacao transacoes[], int qtd);
void gerenciarMeta(Transacao transacoes[], int qtd, float *meta);

#endif