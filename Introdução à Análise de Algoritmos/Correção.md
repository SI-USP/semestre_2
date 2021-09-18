# Correção

- Identificar invariáveis

- Inicialização

- Manutenção

- Término

## Anotações GDB

- Compilar um programa com a flag `-g` faz com que este programa armazene seu código fonte, permitindo-o ser debugado em sua execução.

- Para se debugar um programa, chama-se este com o comando `gdb` no terminal.

- `run` roda o programa.

- `layout next` muda a forma de exibição da interface.

- `refresh` atualiza a interface.

- `next`, ou `n`, avança o programa em uma linha de comando *no escopo atual*.

- `print`, ou apenas `p`, pode ser utilizado para realizar calculos aritméticos com o valor de variáveis.

- `print var` apresenta o valor da variável var.

- `print vector@x` apresenta os primeiros `x` valores de um vetor `vector`.

- `print *vector@x` apresenta os valores apontados por um vetor de ponteiros `vector`.

- `step` avança o programa em uma linha de comando *no escopo global*, entrando em funções, etc.

- `break x` coloca um ponto de interrupção da execução na linha `x`.

- `break function` coloca um ponto de interrupção da execução no início de uma função `function`.

- `info break` lista todos os pontos de interrupção;

- `del x` apaga o breakpoint de número `x`, tal qual descrito por `info break`.

- `clear function` retira os pontos de interrupção colocados na função `function`.

- `display i` para cada comando seguinte, mostrar o valor de `i`. `undisplay n` cessa este comportamento para a variável de índice `n`. 

- `watch [expressão]`  (*watchpoint*) interrompe a execução do programa toda vez que o valor de uma expressão se altera.

- `whatis i`, ou `what i`, mostra o tipo da variável `i`.

- `backtrace` (`bt`) no caso de um Segmentation Fault, aponta-se a linha em que este ocorreu e os valores das variáveis à este ponto.

- `finish` executa a função atual e interrompe a execução quando esta termina, indicando onde no código esta retorna e com qual valor.

- `quit` sai do debugger.

## Comandos avançados

- `target record-full` grava a execução e permite voltar para passos anteriores com `reverse-next`, `reverse-step`, `reverse-continue` (`rn`, `rs`).

- `set var i = x` altera o valor da variável `i` para `x` e permite a continuidade da execução do código.