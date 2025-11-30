#include <stdio.h>
#include "storage.h"

void carregarDados(Transacao transacoes[], int *qtd, float *meta) {
    FILE *file = fopen(ARQUIVO_DB, "r");
    *qtd = 0;

   if (file) {
        while (fscanf(file, "%[^;];%c;%f;%[^;];%[^\n]\n", 
               transacoes[*qtd].data, 
               &transacoes[*qtd].tipo, 
               &transacoes[*qtd].valor, 
               transacoes[*qtd].categoria, 
               transacoes[*qtd].descricao) == 5) {
            (*qtd)++;
        }
        fclose(file);
    }

    file = fopen(ARQUIVO_META, "r");
    if (file)
    {
        fscanf(file, "%f", meta);
        fclose(file);
    } else {
        *meta = 0.0;
    }
}

void salvarDados(Transacao transacoes[], int qtd, float meta) {
    FILE *file = fopen(ARQUIVO_DB, "w");
    if (file) {
        for (int i = 0; i < qtd; i++) {
            fprintf(file, "%s;%c;%.2f;%s;%s\n",
                    transacoes[i].data,
                    transacoes[i].tipo,
                    transacoes[i].valor,
                    transacoes[i].categoria,
                    transacoes[i].descricao);
        }
        fclose(file);
    }

    file = fopen(ARQUIVO_META, "w");
    if (file) {
        fprintf(file, "%.2f", meta);
        fclose(file);
    }
    printf("\n[Storage] Dados sincronizados com o disco.\n");
}