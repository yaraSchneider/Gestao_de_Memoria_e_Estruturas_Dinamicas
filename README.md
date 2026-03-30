# Gestão de Memória e Estruturas Dinâmicas

## 📚 Objetivo
Este repositório contém exercícios práticos para dominar alocação dinâmica de memória, manipulação de ponteiros e estruturas de dados em linguagem C. Os exercícios progridem de conceitos fundamentais até estruturas avançadas e tipos abstratos de dados (TAD).

---

## 🎯 Estrutura do Projeto

### **Parte 1: Fundamentos e Tipos Simples**
Introdução aos conceitos básicos de ponteiros e alocação dinâmica.

| # | Exercício | Objetivos |
|---|-----------|-----------|
| **1.1** | Alocação Simples | Declarar ponteiro para float, alocar memória, ler valor, exibir com 2 casas decimais |
| **1.2** | Gestão Segura | Alocar 1GB, verificar NULL, exibir erro ou liberar com sucesso |
| **1.3** | Vetores Dinâmicos | Pedir tamanho N, alocar vetor, preencher e calcular média usando `sizeof(int)` |
| **1.4** | Aritmética de Ponteiros | Alocar vetor de 5 posições, percorrer com `ptr++` e `*` (sem usar `[]`) |
| **1.5** | Passagem por Referência | Função que recebe endereço de int e dobra o valor original |

---

### **Parte 2: Tipos Heterogêneos (Structs)**
Trabalho com estruturas heterogêneas e alocação dinâmica de dados estruturados.

| # | Exercício | Objetivos |
|---|-----------|-----------|
| **2.1** | Entidade Produto | Definir struct Produto (ID, Preço), alocar dinamicamente, usar apenas `->` |
| **2.2** | Vetor de Registros | Usar malloc para array dinâmico de 3 estruturas Aluno (nome, nota) |
| **2.3** | Resete de Dados | Implementar `void reset_estoque(Produto *p)` para zerar campos |
| **2.4** | Strings Dinâmicas | Struct Usuario com `char *nome`, alocar struct e nome com `strlen` |
| **2.5** | Composição Dinâmica | Struct Pessoa com ponteiro para Endereco, alocar ambos separadamente |

---

### **Parte 3: Avançado e Estruturas Especiais**
Estruturas complexas, matrizes dinâmicas e tipos abstratos de dados.

| # | Exercício | Objetivos |
|---|-----------|-----------|
| **3.1** | Redimensionamento | Alocar 2 inteiros, usar `realloc` para expandir para 4 conforme dados |
| **3.2** | Matriz Dinâmica | Alocar matriz M×N usando `int **matriz` |
| **3.3** | Liberação Profunda | Função para liberar matriz, liberando linhas antes do ponteiro principal |
| **3.4** | Vetor de Strings | Alocar vetor de `char*` para nomes de cidades informados pelo usuário |
| **3.5** | Clonagem | Função `Produto* clonar(Produto *origem)` que aloca novo espaço e copia dados |
| **3.6** | Busca Sequencial | Função que busca produto por ID em vetor de 10 e retorna endereço ou NULL |
| **3.7** | Filtragem | Gerar novo vetor dinâmico com endereços apenas de alunos aprovados (nota > 7.0) |
| **3.8** | Análise Big O | Código que percorre matriz N×N com análise em comentário (O(n²)) |
| **3.9** | TAD Geométrico (.h) | Arquivo ponto.h com estrutura opaca e assinaturas: criar, distancia, destruir |
| **3.10** | TAD Geométrico (.c) | Arquivo ponto.c com implementação das operações do TAD |

---

## 📋 Instruções Gerais

### ✅ Requisitos
- Compilador C (gcc recomendado)
- Conhecimento básico de C (variáveis, funções, estruturas de controle)

### 🔧 Como Compilar
```bash
gcc -o ex1 exercicio.c
```

### ▶️ Como Executar
```bash
./exercicio
````

---

## 💡 Conceitos-Chave

### Alocação de Memória
- **`malloc(size)`**: Aloca `size` bytes e retorna ponteiro (não inicializado)
- **`calloc(num, size)`**: Aloca espaço para `num` elementos de `size` bytes (inicializa com zero)
- **`realloc(ptr, size)`**: Redimensiona bloco de memória previamente alocado
- **`free(ptr)`**: Libera memória e invalida o ponteiro

### Operadores de Ponteiros
- **`&`** (endereço-de): Obtém endereço de uma variável
- **`*`** (desreferência): Acessa valor apontado pelo ponteiro
- **`->`**: Acessa membro de struct através de ponteiro (equivalente a `(*ptr).membro`)

### Aritmética de Ponteiros
- `ptr++`: Avança para próximo elemento (incremento baseado no tipo)
- `ptr + n`: Calcula endereço N posições adiante
- `ptr - ptr2`: Distância entre dois ponteiros

---

## 🔍 Checklist de Correção

Para cada exercício, verifique:

- [ ] Código compila sem avisos (use `-Wall -Wextra`)
- [ ] Entrada/saída funciona corretamente
- [ ] Sem memory leaks (verificado com valgrind)
- [ ] Ponteiros NULL são verificados
- [ ] `free()` é chamado para toda memória alocada
- [ ] Código segue a especificação exatamente
- [ ] Há comentários explicando operações com ponteiros

---

## 👥 Autor/Contribuidor

**Aluno**: yaraSchneider  
**Disciplina**: Programação em C  
**Data**: 2026-03-30

---

## 📞 Dúvidas e Sugestões

Para questões sobre os exercícios, consulte a documentação ou solicite revisão do código.

---

**Última atualização**: 2026-03-30
