# Questão 04

**a)** O caso base é `n == 0`, onde a função devolve 1 e para de chamar a si mesma. O passo recursivo é `n * fatorial(n - 1)`, onde a função chama ela mesma com um número menor.

Se eu tirasse o caso base, a função nunca ia parar de se chamar (o `n` ia ficando negativo para sempre) e o programa ia travar ou quebrar.

**b)** Rastreando `fatorial(4)`:

Empilhando (as chamadas vão ficando esperando):

```
fatorial(4) -> 4 * fatorial(3)
fatorial(3) -> 3 * fatorial(2)
fatorial(2) -> 2 * fatorial(1)
fatorial(1) -> 1 * fatorial(0)
fatorial(0) -> caso base, devolve 1
```

Desempilhando (cada uma devolve seu valor):

```
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1 = 1
fatorial(2) devolve 2 * 1 = 2
fatorial(3) devolve 3 * 2 = 6
fatorial(4) devolve 4 * 6 = 24
```

Resultado: 24.

**c)** Cada vez que a função se chama, o computador reserva um espacinho na pilha de execução para guardar o `n` daquela chamada e o ponto de onde ela deve voltar. As chamadas ficam empilhadas esperando a de cima terminar. Quando chega no caso base, elas vão saindo da pilha uma por uma, devolvendo os valores.

Sem caso base, a pilha só cresce até a memória reservada acabar. Isso se chama estouro de pilha (stack overflow) e o programa falha.
