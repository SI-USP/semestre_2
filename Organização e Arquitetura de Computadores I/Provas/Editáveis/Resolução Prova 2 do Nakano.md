# Resolução Prova 2 do Nakano

> Baseado em relatos da turma 94.

## Q1.

## Q3.

Algoritmos de correção de erro são operações pelas quais erros no armazenamento ou transmissão de dados podem ser detectados e e eventualmente corrigidos. Um exemplo destes é o *Código de Hamming*. Este opera sobre conjuntos de dados em forma binária, adicionando a estes um dado número de bits de verificação dispostos de maneira a testar a paridade dos bits `1`. Considere um caso simples de uma mensagem de 11 bits armazenada em um bloco de 16 bits. Isto é, 11 bits de mensagem mais 5 bits de verificação.

| Bits 0 à 3 | Bits 4 à 7 | Bits 8 à 11 | Bits 12 à 15 |
| ---------- | ---------- | ----------- | ------------ |
| **0**      | **0**      | **1**       | 1            |
| **1**      | 0          | 1           | 0            |
| **0**      | 0          | 1           | 0            |
| 1          | 0          | 0           | 1            |

Os bits de verificação estão apresentados em negrito, repare que estes ocupam posições cujo índice é uma potência de 2 ou zero. A mensagem, `0100101001` foi depositada no bloco da esquerda para a direita, de cima para baixo. Os bits de verificação indicam, respectivamente:

- Bit 1: a paridade das linhas impares;

- Bit 2: a paridade das linhas maiores que 1;

- Bit 4: a paridade das colunas impares;

- Bit 8: a paridade das colunas maiores que 1;

Com esses bits apenas é possível localizar e mesmo corrigir um bit errôneo ("flipado") no interior da mensagem ao comparar a paridade dos 1s com aquela indicada pelos bits de verificação. Na mensagem acima temos duas divergências: o bit 2 indica um número ímpar de 1s onde não há e o bit 4 indica um um número par onde não há. Com isso podemos inferir que o bit 10 necessita ser modificado para restaurar a paridade correta.

Por fim, o Bit **zero** indica a paridade do *bloco como um todo*, incluindo os bits de verificação. Desta forma, é possível detectar a ocorrência de mais de um erro, embora não seja possível corrigí-los pois com os bits de verificação que dispomos seja possível precisar apenas a localização de um bit errôneo. $\blacksquare$