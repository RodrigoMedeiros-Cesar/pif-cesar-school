# Questão 06

**a)** Com `#include <stdio.h>` o compilador procura o arquivo nas pastas padrão do sistema, então uso para as bibliotecas do C. Com `#include "areas.h"` ele procura primeiro na pasta do meu projeto, então uso para arquivos que eu mesmo criei.

**b)** O `#undef SOMA` apaga a definição da macro SOMA, então depois dele ela deixa de existir. A forma `#undef SOMA(x,y)` está errada porque o `#undef` só aceita o nome da macro, sem os parâmetros.

**c)** Se o `DEBUG` não foi definido, imprime **"Modo normal"**. Essa escolha é feita no pré-processamento, antes de compilar, então o compilador já recebe só o trecho que vale. Por isso as diretivas (`#ifdef`, `#else`, `#endif`) não aparecem no executável: elas servem só para o pré-processador e somem antes da compilação.

Obs.: no enunciado o `printf` está solto fora de uma função. Num programa de verdade ele teria que ficar dentro da `main()`.
