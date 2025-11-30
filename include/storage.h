#ifndef STORAGE_H
#define STORAGE_H
#include "models.h"

void carregarDados(Transacao transacoes[], int *qtd, float *meta);
void salvarDados(Transacao transacoes[], int qtd, float meta);

#endif