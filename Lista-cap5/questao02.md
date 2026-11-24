# Questão 02

**a)** Uma função em C só consegue devolver **um** valor com o `return`. Na função `calcular()`, o programador queria devolver a soma e a média ao mesmo tempo com `return soma, media;`. Só que a vírgula ali funciona como o operador vírgula: ele calcula os dois, mas fica só com o último. Então a função devolve apenas a `media` e a `soma` se perde.

**b)** O `return;` dentro da `imprime_mensagem()` faz a função terminar na hora. Então, se o erro for menor que 0, ela imprime "Erro invalido" e sai, sem executar o `printf` de baixo. Não é obrigatório colocar `return;` no final de uma função `void`, porque ela termina sozinha quando chega na última chave.

**c)** Função que retorna só a média:

```c
int media(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3;
}
```

Função separada que retorna só a soma:

```c
int soma(int a, int b, int c) {
    return a + b + c;
}
```

Em C precisamos de duas funções porque o `return` só devolve um valor por vez. Então cada resultado precisa da sua própria função.
