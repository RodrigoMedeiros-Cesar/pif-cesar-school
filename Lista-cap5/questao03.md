# Questão 03

**a)**

| Protótipo | Tem parâmetro? | Tem retorno? |
|---|---|---|
| `void exibe_mensagem(char* msg);` | Sim, uma string (`char*`) | Não |
| `int obter_codigo(void);` | Não | Sim, um `int` |
| `void limpar_tela(void);` | Não | Não |

**b)** A função com retorno devolve um valor para quem chamou, e eu posso guardar ele numa variável ou usar numa conta. O procedimento (`void`) só faz uma tarefa e não devolve nada.

- Exemplo de função com retorno: calcular a média de notas, porque eu preciso do resultado depois.
- Exemplo de procedimento: mostrar um menu na tela, porque só preciso imprimir e não tem nada para devolver.

**c)** Não é válida. A `limpar_tela()` é `void`, ou seja, não devolve valor nenhum, então não dá para guardar o resultado dela em `x`. Dá erro de compilação. O certo é chamar só `limpar_tela();`.
