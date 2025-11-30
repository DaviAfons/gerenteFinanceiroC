# 💰 Gerente Financeiro

Um sistema de gerenciamento financeiro pessoal leve, modular e eficiente, desenvolvido puramente em **Linguagem C**.

O objetivo deste projeto é demonstrar o domínio de conceitos fundamentais da programação estruturada, como manipulação de ponteiros, alocação de memória, *structs* e persistência de dados em arquivos, utilizando uma arquitetura de software organizada e profissional.

---

## 📋 Funcionalidades

- **Cadastro de Transações:** Registre receitas e despesas com data, categoria e descrição.
- **Cálculo de Saldo:** Visualização em tempo real do saldo atual.
- **Extrato Detalhado:** Listagem tabular de todas as movimentações.
- **Relatórios Mensais:** Filtre seus gastos e ganhos por mês/ano específico.
- **Gerenciamento de Metas:** Defina um objetivo financeiro e acompanhe o progresso (%) automaticamente.
- **Persistência de Dados:** Todos os dados são salvos automaticamente em arquivos `.db`.

---

## 🛠️ Arquitetura do Projeto

O código segue o princípio de **Separação de Preocupações (SoC)**.

```

.
├── src/                 # Implementação (.c)
│   ├── main.c           # Menu e fluxo principal
│   ├── operations.c     # Lógica de negócios (Cálculos, Filtros)
│   ├── storage.c        # Persistência (Leitura/Escrita)
│   └── utils.c          # Funções utilitárias
│
├── include/             # Cabeçalhos (.h)
│   ├── models.h         # Structs e constantes
│   └── ...
│
├── obj/                 # Arquivos objeto (gerado automaticamente)
└── Makefile             # Automação de compilação

````

---

## 🚀 Como Rodar o Projeto

### Pré-requisitos
Você precisará de GCC e `make`.

No Ubuntu/Debian:
```bash
sudo apt install build-essential
````

### Passos

1. Clone o repositório.
2. Abra o terminal na pasta do projeto.
3. Compile:

```bash
make
```

4. Execute:

```bash
./finance_manager
```

### Limpeza

```bash
make clean
```

---

## 💾 Sobre os Dados

Arquivos gerados na raiz:

* `transactions.db`
* `goal.db`

O arquivo de transações usa `;` como separador — renomeie para `.csv` para abrir no Excel/Sheets.

---

## 📚 Aprendizados Técnicos

* Modularização com headers e múltiplos arquivos `.c`
* Leitura e escrita segura em arquivos
* Uso de ponteiros e passagem por referência
* Tratamento de buffers com `fgets`
* Makefile profissional para automação

---

## 💡 Sugestões e Contribuições

* Abra uma **Issue** no GitHub para relatar bugs ou sugerir melhorias.
* Faça um **Fork** e envie um Pull Request com novas funcionalidades.

---

## 👤 Autor

Desenvolvido por **Davi Afonso**.

---

## 📄 Licença

Distribuído sob a **Licença MIT**.
