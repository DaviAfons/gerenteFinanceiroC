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
- **Persistência de Dados:** Todos os dados são salvos automaticamente em arquivos `.db` (formato compatível com CSV), garantindo que nada se perca ao fechar o programa.

---

## 🛠️ Arquitetura do Projeto

O código foi refatorado para seguir o princípio de **Separação de Preocupações (SoC)**, facilitando a manutenção e a escalabilidade.

```

.
├── src/            \# Implementação (.c)
│   ├── main.c      \# Menu e fluxo principal
│   ├── operations.c \# Lógica de negócios (Cálculos, Filtros)
│   ├── storage.c   \# Camada de Persistência (Leitura/Escrita em disco)
│   └── utils.c     \# Funções utilitárias (Helpers)
│
├── include/        \# Cabeçalhos e Contratos (.h)
│   ├── models.h    \# Definições de Structs e Constantes
│   ├── ...
│
├── obj/            \# Arquivos objetos compilados (gerado automaticamente)
└── Makefile        \# Automação de compilação

````

---

## 🚀 Como Rodar o Projeto

### Pré-requisitos
Você precisará de um compilador C (GCC) e do utilitário `make`.
*No Ubuntu/Debian:* `sudo apt install build-essential`

### Passos
1. Clone o repositório ou baixe os arquivos.
2. Abra o terminal na pasta do projeto.
3. Compile o código:
   ```bash
   make
````

4.  Execute o programa:
    ```bash
    ./finance_manager
    ```

### Limpeza

Para remover os arquivos compilados (os dados salvos **não** serão apagados):

```bash
make clean
```

-----

## 💾 Sobre os Dados

O sistema gera dois arquivos na raiz:

1.  `transactions.db`: Contém o histórico de transações.
2.  `goal.db`: Contém a meta financeira atual.

> **Dica:** O formato do arquivo `transactions.db` é `;` (ponto e vírgula). Você pode renomeá-lo para `.csv` e abri-lo diretamente no Excel ou Google Sheets\!

-----

## 📚 Aprendizados Técnicos

Durante o desenvolvimento deste projeto, foram aplicados:

  - **Modularização em C:** Uso de *headers* e múltiplos arquivos fonte.
  - **File I/O:** Leitura e escrita segura em arquivos de texto (parseamento de strings).
  - **Gerenciamento de Buffer:** Uso de `fgets` para evitar estouro de buffer e leitura suja.
  - **Ponteiros:** Passagem de dados por referência para otimização de memória.
  - **Makefile:** Automação de *build* profissional.

-----

## 💡 Sugestões e Contribuições

Este projeto foi desenvolvido para ser um ponto de partida limpo e funcional em C. Se você tem ideias para novos recursos, encontrou um bug ou acredita que a documentação (ou o código) pode ser melhorada, sua contribuição é muito bem-vinda!

### Como Sugerir ou Contribuir?

Existem duas formas principais de interagir com o projeto:

1.  **Abrir uma Issue (Preferencial):** Use a seção "Issues" do GitHub para descrever detalhadamente o problema que encontrou ou a nova funcionalidade que gostaria de ver. Isso ajuda a manter um registro organizado das pendências.
2.  **Fazer um Fork:** Se você fez melhorias no código e gostaria de incorporá-las, sinta-se à vontade para fazer um *fork* do repositório, implementar as alterações e enviar um **Pull Request**.

Toda e qualquer sugestão será analisada!

-----

## 👤 Autor

Desenvolvido por **Davi Afonso**.

---

## 📄 Licença

Distribuído sob a **Licença MIT** — você pode usar, estudar, modificar e distribuir livremente.