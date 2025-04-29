
# ♟️ Simulador de Movimentos de Peças de Xadrez em C

Este é um programa simples escrito em **linguagem C** que simula os movimentos de três peças de xadrez: **Torre**, **Bispo** e **Rainha**. Cada peça utiliza uma estrutura de repetição diferente para demonstrar sua movimentação no tabuleiro.

---

## 🔧 Linguagem e Ferramentas

- **Linguagem:** C (Linguagem de Programação Estruturada)
- **IDE usada:** CLion
- **IDE recomendada:** CLion, Code::Blocks, Dev-C++, Visual Studio Code com extensão C/C++
- **Compilador:** GCC (GNU Compiler Collection) ou qualquer outro compatível com C

---

## 🎯 Objetivo do Programa

Simular os movimentos de três peças de xadrez utilizando diferentes estruturas de repetição:

### 🏰 Torre
- **Movimento:** 5 casas para a **Direita**
- **Estrutura de repetição usada:** `for`
- **Saída esperada:**
  ```
  Direita
  Direita
  Direita
  Direita
  Direita
  ```

### ♗ Bispo
- **Movimento:** 5 casas na **diagonal Cima Direita**
- **Estrutura de repetição usada:** `while`
- **Saída esperada:**
  ```
  Cima Direita
  Cima Direita
  Cima Direita
  Cima Direita
  Cima Direita
  ```

### 👑 Rainha
- **Movimento:** 8 casas para a **Esquerda**
- **Estrutura de repetição usada:** `do-while`
- **Saída esperada:**
  ```
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  ```

---

## 🧪 Como Executar o Programa

1. Copie o código abaixo em um arquivo chamado `movimentos_xadrez.c`
2. Compile o código usando seu compilador C preferido (por exemplo, com GCC):
   ```bash
   gcc movimentos_xadrez.c -o movimentos
   ./movimentos
   ```

---

## 📄 Código Fonte

```c
#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da torre 5 casas usando for
    printf("Movimento da Torre 5 casas para a direita:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do bispo 5 casas (cima direita) usando while
    printf("\nMovimento do Bispo 5 casas na diagonal cima direita:\n");
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da rainha 8 casas para esquerda usando do while
    printf("\nMovimento da Rainha 8 casas para a esquerda:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
```

---

## 👨‍💻 Autor

Feito com 💻 por [Luis Paladino]

---

