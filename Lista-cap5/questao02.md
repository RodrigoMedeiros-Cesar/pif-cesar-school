# Questão 02 — O Comando `return` e suas Limitações

**a)** Uma função em C devolve **apenas um valor** por meio de `return`. Na função `calcular()`, o programador pretendia devolver a soma **e** a média, mas `return soma, media;` usa o **operador vírgula**: as duas expressões são avaliadas e só o último valor (`media`) é devolvido. A `soma` é descartada, então o objetivo não é cumprido (e o compilador ainda costuma emitir aviso).

**b)** O `return;` dentro de `imprime_mensagem()` **encerra a função imediatamente**, voltando ao ponto de chamada sem devolver valor. Assim, quando `erro < 0`, a mensagem de erro é impressa e a segunda linha não é executada. Ele **não é obrigatório** no final de uma função `void`: quando a execução chega à chave de fechamento `}`, a função termina sozinha.

**c)** Reescrita:

```c
int media(int a, int b, int c) {
    return (a + b + c) / 3;
}

int soma(int a, int b, int c) {
    return a + b + c;
}
```

Em C precisamos de duas funções porque `return` só carrega **um único valor** por vez. Para devolver dois resultados diferentes, é preciso separar a tarefa em duas funções (ou usar outros recursos, como ponteiros, vistos adiante).
