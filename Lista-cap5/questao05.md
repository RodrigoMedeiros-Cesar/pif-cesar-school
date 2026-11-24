# Questão 05 — Diretiva `#define`, Constantes e Macros com Argumentos

**a)** Saída:

```
25
8
```

- `SQR(2+3)` expande para `((2+3)*(2+3))` = 5 × 5 = **25**. Os parênteses em volta do argumento preservam a ordem desejada.
- `DOBRO(2+3)` expande para `2+3*2`. Como `*` tem precedência sobre `+`, resulta em 2 + 6 = **8** (e não 10). Faltaram os parênteses de proteção: `((x)*2)`.

**b)** `#define` é uma diretiva do **pré-processador**, não um comando da linguagem C. Ela vai até o fim da linha e o texto após o nome faz parte da substituição, então um `;` seria copiado junto para todos os lugares onde a macro é usada, podendo causar erros (ex.: `x = PI;;` ou `int v[N;]`). Por convenção usamos **maiúsculas** para distinguir facilmente macros e constantes de variáveis e funções no código.

**c)** `#define PRN (n) printf("%d", n)` está incorreto porque o **espaço** entre `PRN` e `(n)` faz o pré-processador entender uma macro **sem argumentos** chamada `PRN`, cuja substituição é o texto `(n) printf("%d", n)`. A forma correta é sem espaço:

```c
#define PRN(n) printf("%d", n)
```

Diferenças entre macro com argumentos e função: a macro faz **substituição textual** antes da compilação (sem chamada, sem verificação de tipos e sem pilha), enquanto a função é compilada, tem tipos checados e recebe seus argumentos avaliados uma única vez. Por isso, macros podem avaliar o argumento várias vezes (por exemplo, `SQR(i++)` incrementa `i` duas vezes) e exigem parênteses de proteção.
