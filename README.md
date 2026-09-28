# boca-prog1-ufes

Soluções dos exercícios de programação do BOCA - UFES

## Conteúdo das listas

As listas seguem a ordem abaixo, que acompanha o avanço da matéria de Programação 1.

| Pasta | Exercícios | Tema |
|-------|-----------|------|
| `M/` | 3 | Monitoria: aquecimento com o formato de entrada e saída do BOCA |
| `L1/` | 15 | Condicionais e operações básicas |
| `L2/` | 23 | Laços, caracteres e matrizes |
| `L3/` | 13 | Funções |
| `L4/` | 7 | TADs com `struct` e múltiplos arquivos (.h/.c/main) |
| `L5/` | 19 | Vetores, strings e matrizes |
| `L6/` | 6 | Integração de L4 e L5: TADs com vetores |
| `LDEP1/` | 7 | Depuração: consertar códigos quebrados |

## Estrutura das pastas

Cada exercício segue a mesma organização, dentro da pasta correspondente (por exemplo, `L1/`):

**Fornecido pelo BOCA (baixado junto com o exercício):**

- **exx.pdf**: enunciado da questão
- **input/**: pasta com os arquivos de entrada para teste (ex: `test_1`, `test_2`, etc.)
- **output/**: pasta com as saídas esperadas (gabarito), um arquivo correspondente para cada arquivo de `input/`
- **exx.zip**: pacote com o exercício completo, baixado do BOCA

**Criado por mim durante a resolução:**

- **exx.c**: código-fonte da solução
- **saida/**: pasta criada localmente para guardar as saídas geradas pelo meu próprio programa, usada para comparar com `output/`

Ou seja: para cada arquivo dentro de `input/`, existe um arquivo com o mesmo nome em `output/` (a resposta certa) e, depois de eu rodar meu programa, um arquivo também com o mesmo nome em `saida/` (a resposta que meu programa deu). São esses dois últimos que comparo com o `diff`.

## Ambiente utilizado

- **Compilador:** GCC (MinGW-w64, instalado via [MSYS2](https://www.msys2.org/))
- **Terminal:** MSYS2 UCRT64

## Fluxo de trabalho

1. Baixar e extrair o `.zip` do exercício
2. Criar a pasta `saida/` (se ainda não existir)
   ```bash
   mkdir saida
   ```
3. Escrever a solução em C (ex: `exx.c`)
4. Compilar o programa:
   ```bash
   gcc -o test exx.c
   ```
5. Rodar o programa para cada arquivo de teste, redirecionando a entrada e salvando a saída:
   ```bash
   ./test < input/test_1 > saida/test_1
   ```
6. Comparar a saída gerada com o gabarito usando `diff`:
   ```bash
   diff output saida
   ```
   - Se não aparecer nada, a saída está correta
   - Se aparecer alguma diferença, o programa ainda precisa de ajustes
