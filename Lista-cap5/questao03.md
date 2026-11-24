# Questão 03 — Funções `void`, Parâmetros e Assinaturas

**a)**

| Protótipo | Parâmetros de entrada | Valor de retorno |
|---|---|---|
| `void exibe_mensagem(char* msg);` | Sim (um `char*`, ou seja, uma string) | Não (`void`) |
| `int obter_codigo(void);` | Não | Sim (`int`) |
| `void limpar_tela(void);` | Não | Não |

**b)** Uma **função com retorno** calcula e devolve um valor ao chamador, que pode usá-lo em expressões. Um **procedimento** (`void`) apenas executa uma ação, sem devolver resultado.

- Função com retorno é a melhor escolha quando se precisa de um **resultado**, por exemplo calcular a média de notas (`float media(...)`).
- Procedimento é a melhor escolha quando o objetivo é um **efeito**, como imprimir um menu ou limpar a tela (`void exibeMenu(void)`).

**c)** **Não é válida.** `limpar_tela()` é do tipo `void`, isto é, não produz valor algum. Atribuir "nada" a `x` é um erro de compilação (o compilador acusa que um valor `void` não é ignorado/atribuível). A forma correta é só `limpar_tela();`.
