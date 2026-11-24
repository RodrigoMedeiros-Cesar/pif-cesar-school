# Questão 05

**a)** A saída é:

```
25
8
```

- `SQR(2+3)` vira `((2+3)*(2+3))`, que dá 5 * 5 = **25**.
- `DOBRO(2+3)` vira `2+3*2`. Como a multiplicação é feita antes da soma, fica 2 + 6 = **8**, e não 10 como eu esperava.

A diferença é que o SQR tem parênteses protegendo o `x`, e o DOBRO não tem.

**b)** O `#define` não termina com ponto e vírgula porque ele não é um comando da linguagem C, é uma instrução para o pré-processador. Se eu colocasse `;`, ele seria copiado junto em todo lugar onde a macro for usada e poderia dar erro. Usamos maiúsculas por convenção, para saber logo de cara que aquilo é uma constante ou macro e não uma variável.

**c)** `#define PRN (n) printf("%d", n)` está errado por causa do espaço entre `PRN` e `(n)`. Com o espaço, o pré-processador entende que PRN é uma macro sem argumentos. O certo é:

```c
#define PRN(n) printf("%d", n)
```

Diferença entre macro com argumentos e função: a macro só troca o texto antes de compilar, não verifica tipos e pode dar resultado estranho se faltar parênteses (como no DOBRO). A função é compilada normalmente, confere os tipos e calcula o argumento uma vez só.
