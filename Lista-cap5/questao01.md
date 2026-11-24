# Questão 01

**a)** No código da função `celsius()`:

- **Protótipo:** `float celsius(float);` fica antes da main. Ele avisa o compilador que existe uma função chamada celsius, que recebe um float e devolve um float.
- **Chamada:** `c = celsius(f);` fica dentro da main. É aqui que a função é usada: mando o valor de `f` e o resultado vai para `c`.
- **Definição:** `float celsius(float fahr) { ... }` fica depois da main. É onde está o código que faz a conta de verdade.

**b)** O protótipo serve para o compilador conferir se a função está sendo chamada do jeito certo (quantidade de parâmetros e tipos). Se ele não existisse e a função ficasse depois da main, o compilador não saberia nada sobre ela na hora da chamada. Nos compiladores mais antigos ele acharia que a função devolve `int` e não verificaria os parâmetros, então o resultado poderia sair errado. Nos mais novos dá aviso ou erro.

**c)** A função `celsius()` é do tipo `float`. O tipo da função é o tipo do valor que ela devolve, porque quando eu chamo a função ela "vira" esse valor dentro da expressão (por exemplo, `c = celsius(f)`), e o compilador precisa saber de que tipo ele é. Os parâmetros são só os dados que entram, eles não mudam o tipo do resultado.
