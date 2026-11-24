# Questão 06 — Diretivas `#include`, `#undef` e Compilação Condicional

**a)**

- `#include <stdio.h>`: com **sinais de menor/maior**, o pré-processador procura o arquivo nos diretórios padrão do sistema/compilador. Usamos para as bibliotecas padrão da linguagem.
- `#include "areas.h"`: com **aspas**, procura primeiro no diretório do próprio projeto (o do arquivo atual) e, se não encontrar, nos diretórios padrão. Usamos para cabeçalhos criados pelo programador.

**b)** `#undef SOMA` **remove a definição** da macro `SOMA`, de modo que, a partir dali, ela deixa de existir (podendo ser redefinida ou o nome ser usado normalmente). A forma `#undef SOMA(x,y)` está incorreta porque `#undef` recebe **somente o identificador** (o nome da macro), sem a lista de parâmetros.

**c)** Se `DEBUG` não foi definido, será impresso **`Modo normal`**. Essa decisão é tomada no **pré-processamento**, antes da compilação: o pré-processador mantém apenas o trecho do `#else` e descarta o outro. As diretivas (`#ifdef`, `#else`, `#endif`, etc.) são instruções para o pré-processador e são **removidas** na etapa de pré-processamento, por isso não existem no executável final, que contém apenas o código do ramo escolhido.

> Observação: no trecho do enunciado, o `printf` aparece solto, fora de uma função; em um programa real, esse bloco precisa ficar dentro de `main()` ou de outra função.
