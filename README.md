# 🔧 c-fundamentals-and-logic

> Exercícios e projetos em **Linguagem C** com foco em fundamentos de programação de sistemas, manipulação direta de memória e construção de raciocínio algorítmico sólido.

## 📌 Objetivo

Este repositório documenta minha prática em C — a linguagem que mais próxima do hardware nos coloca, exigindo compreensão real de **como a máquina funciona**. Dominar C é o que diferencia quem apenas usa abstrações de quem as **constrói**.

---

## 🗂️ Estrutura dos Exercícios

| Arquivo | Conceito Praticado | Descrição |
|---|---|---|
| `helloworld.c` | Estrutura básica de programa, `stdio.h` | Primeiro programa: saída padrão com `printf` |
| `soma.c` | Variáveis, tipos primitivos, operadores aritméticos | Leitura de dois inteiros via `scanf` e soma |
| `produto.c` | Operadores aritméticos, E/S formatada | Multiplicação com formatação de saída |
| `diferenca.c` | Operadores aritméticos, precedência | Subtração e compreensão de precedência de operadores |
| `calculosimples.c` | Expressões aritméticas compostas | Combinação de operadores em uma única expressão |
| `media1.c` | Expressões com ponto flutuante (`float`) | Cálculo de média simples — atenção à divisão inteira vs. real |
| `media2.c` | Casting implícito e explícito | Média ponderada com conversão de tipos (`type casting`) |
| `areadacircuferencia.c` | Constantes (`#define`, `M_PI`), `math.h` | Uso de π e funções matemáticas da biblioteca padrão |
| `calculodeareas.c` | Estruturas de Controle — `if/else` | Seleção de fórmula geométrica com base em entrada do usuário |
| `distancia.c` | Expressões matemáticas, `sqrt()` | Distância entre dois pontos no plano cartesiano |
| `distanciaentrepontos.c` | Modularidade, múltiplas variáveis | Cálculo de distância euclidiana com 4 coordenadas |
| `esfera.c` | `pow()`, constantes matemáticas | Volume e área da superfície de esfera |
| `formuladebaskara.c` | Estruturas de Controle — discriminante, `sqrt()` | Equação do 2º grau com tratamento de delta negativo |
| `consumo.c` | Divisão real, E/S formatada | Cálculo de consumo médio de combustível |
| `gastodecombustivel.c` | Composição de expressões | Estimativa de gasto total com abastecimento |
| `idadedias.c` | Operadores aritméticos inteiros | Conversão de idade em anos para dias |
| `salario.c` | Variáveis `float`, formatação monetária | Cálculo de salário líquido |
| `salariobonus.c` | Estruturas de Controle — `if/else` | Bônus condicional baseado em desempenho |
| `cedula.c` | Operadores de divisão inteira e módulo (`/` e `%`) | Troco em cédulas — algoritmo guloso elementar |
| `indentificandocha.c` | Estruturas de Controle — `switch/case` | Identificação de tipo de chá por código |
| `notasenotas.c` | Estruturas de Controle aninhadas, `if/else if` | Sistema de aprovação com múltiplos critérios |
| `omaior.c` | Comparação e seleção — `if/else` | Identificação do maior entre N valores |

---

## 🧠 Conceitos-Chave Abordados

### Tipos de Dados e Memória
- `int`, `float`, `double`, `char` — tamanhos e representação em memória
- Diferença entre **divisão inteira** (`/` entre inteiros) e **divisão real** (`/` com `float`)
- **Type Casting** implícito e explícito

### Estruturas de Controle
- Seleção simples e composta: `if`, `if/else`, `if/else if`
- Seleção múltipla: `switch/case`
- Operadores relacionais (`<`, `>`, `==`, `!=`) e lógicos (`&&`, `||`, `!`)

### Entrada e Saída Formatada
- `printf` com especificadores: `%d`, `%f`, `%lf`, `%c`, `%.2f`
- `scanf` com endereçamento de memória (`&variavel`)

### Biblioteca Matemática (`math.h`)
- `sqrt()`, `pow()`, constante `M_PI`
- Compilação com flag `-lm`

---

## ⚙️ Como Compilar e Executar

```bash
# Compilação padrão
gcc nome_do_arquivo.c -o nome_do_arquivo

# Para arquivos que usam math.h
gcc nome_do_arquivo.c -o nome_do_arquivo -lm

# Executar
./nome_do_arquivo
```

---

## 🚀 Próximos Passos

- [ ] Estruturas de repetição: `for`, `while`, `do-while`
- [ ] Arrays e Strings
- [ ] Funções e escopo de variáveis
- [ ] **Ponteiros e Alocação Dinâmica de Memória** (`malloc`, `free`)
- [ ] Estruturas de dados em C: `struct`, `union`
- [ ] Complexidade de Algoritmos — notação **O(n)**

---

## 👨‍💻 Autor

**Arthur Silva** — Estudante de Ciência da Computação, UESC (2026–2030)  
Foco: Back-end · Arquitetura de Software · Programação de Sistemas  
[![GitHub](https://img.shields.io/badge/GitHub-arthur--engsoftware-181717?style=flat&logo=github)](https://github.com/arthur-engsoftware)
