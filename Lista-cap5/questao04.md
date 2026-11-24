# Questão 04 — Recursão: Caso Base, Passo Recursivo e Pilha de Execução

**a)**

- **Caso base:** `n == 0`, que devolve `1` sem nova chamada.
- **Passo recursivo:** `n * fatorial(n - 1)`, que reduz o problema para um valor menor.

Se o caso base fosse removido, a função chamaria a si mesma indefinidamente (`n` ficaria cada vez mais negativo), sem nunca parar, até estourar a pilha de execução.

**b)** Rastreamento de `fatorial(4)`:

**Empilhamento** (chamadas abertas, aguardando resultado):

```
fatorial(4) = 4 * fatorial(3)
 fatorial(3) = 3 * fatorial(2)
  fatorial(2) = 2 * fatorial(1)
   fatorial(1) = 1 * fatorial(0)
    fatorial(0) -> caso base, devolve 1
```

**Desempilhamento** (valores devolvidos):

```
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1  = 1
fatorial(2) devolve 2 * 1  = 2
fatorial(3) devolve 3 * 2  = 6
fatorial(4) devolve 4 * 6  = 24
```

Resultado final: **24**.

**c)** A cada chamada, o sistema cria na **pilha de execução** um novo *quadro* (stack frame) com os parâmetros, as variáveis locais e o endereço de retorno daquela chamada. Cada chamada fica "suspensa" esperando a seguinte terminar. No desempilhamento, cada quadro é removido à medida que devolve seu valor. Sem caso base, os quadros continuam sendo empilhados sem parar até o limite da memória da pilha ser excedido, causando **estouro de pilha** (*stack overflow*), e o programa é encerrado com falha (por exemplo, *segmentation fault*).
