# Questão 01 — Anatomia de uma Função e o Papel do Protótipo

**a)** No programa:

- **Protótipo:** `float celsius(float);` (antes da `main`). Anuncia ao compilador o nome da função, o tipo de retorno e os tipos dos parâmetros, sem o corpo.
- **Chamada:** `c = celsius(f);` (dentro da `main`). É o momento em que a função é executada: o valor de `f` é passado como argumento e o valor retornado é guardado em `c`.
- **Definição:** `float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }` (depois da `main`). É a implementação, o corpo que realiza o cálculo e devolve o resultado.

**b)** O protótipo permite ao compilador **verificar** se as chamadas estão corretas: quantidade de argumentos, tipos dos argumentos (com conversão automática quando possível) e uso correto do valor de retorno. Se ele fosse omitido e a função fosse definida depois da `main`, o compilador chegaria à chamada sem conhecer a função. Em compiladores antigos (C89), ele assumiria uma declaração implícita com retorno `int` e **sem checar os parâmetros**, o que geraria resultados errados (o `float` retornado seria interpretado como `int`). Em compiladores modernos (C99 ou superior), isso gera aviso ou erro de compilação.

**c)** O tipo da função `celsius()` é **`float`**. O tipo da função é o do valor que ela devolve, porque a chamada `celsius(f)` funciona como uma expressão que *vale* o valor retornado e pode ser usada em atribuições e cálculos; o compilador precisa saber de que tipo é esse valor. Os parâmetros apenas descrevem os dados de entrada e não determinam o tipo do resultado produzido.
