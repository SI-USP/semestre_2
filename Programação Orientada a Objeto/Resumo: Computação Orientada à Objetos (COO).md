# Resumo: Computação Orientada à Objetos (COO)

## Classes

Definem **tipos** compostos por **dados (atributos)** e **operações (métodos)** associados entre si.

## Objeto

Uma instância de uma dada classe, contendo dados que lhe são próprios e capaz de executar operações tal qual estas foram definidas por esta. No Java, as *strings* e os *arrays* de tipos primitivos também são objetos com métodos que lhe são próprios.

## Pacotes

Agrupamento de classes, interfaces e sub-pacotes que, idealmente, possuem alguma relação importante entre si.

## Encapsulamento

A prática de se ocultar o estado interno de um objeto perante seu meio circundante, o *código do usuário*, expondo apenas o mínimo necessário para que estes façam uso de suas funcionalidades. Isso, de maneira a que a interação do usuário com este não possa ser feita de forma a comprometer estas mesmas funcionalidades. O encapsulamento adequado é obtido fazendo uso adequado de modificadores de acesso na declaração de seus métodos, atributos, ou subclasses.

### Modificadores de acesso

`public`:  torna o item acessível em qualquer parte do código;

`protected`: o item fica acessível ao código das classes que pertencem ao mesmo *pacote* e também classes derivadas (mesmo que em pacotes distintos).

`<default>`: o item só fica acessível ao código de classes do mesmo pacote.

`private`: o item só fica visível para o código da classe que o declara.

### Modificador `static`

O atributo declarado em uma classe com este modificador é compartilhado por `todos` os objetos derivados à partir desta mesma classe. Enquanto métodos declarados com este modificador podem ser utilizados sem que seja necessário antes declarar um objeto desta classe. Por exemplo, o método `round` da classe `math` pode ser utilizado sobre o inteiro `a` fazendo uso da chamada `Math.round(a);` sem que antes seja necessário criar um objeto `Math math = new math();`.

## Tipos primitivos

Os tipos mais elementares de dados, dos quais demais são derivados (como `boolean`, `byte`, `char`, `int`, `long`, `float`, `double`). Os tipos primitivos quando passados enquanto parâmetros para métodos têm seus valores copiados para estes, enquanto os objetos têm seus respectivos ponteiros passados aos mesmos. Desta forma, objetos são alterados por métodos, enquanto instâncias de tipos primitivos não.

## Herança

Mecanismo pelo qual declara-se uma nova classe derivada a partir doutra preexistente. Atributos e métodos da classe base são "herdados" automaticamente pela classe derivada a qual pode estendê-los ou redefiní-los sem assim afetar a classe base. Uma relação de herança também estabelece uma relação hierárquica entre tipos e tipos derivados, a qual pode ser explorada pelo mecanismo de *polimorfismo*.

## Interfaces

Declaração de conjuntos de funcionalidades (métodos) que todas as classes que a implementam estão garantidas de possuir. Desta forma, interfaces definem uma categoria de classes que têm em comum um conjunto de operações, ainda que a implementação destas possa diferir. Interfaces também estabelecem uma relação hierárquica com relação as classes que as implementam, que pode ser explorada no polimorfismo.

## Composição

Quando uma classe possui o objeto doutra classe enquanto um dos seus atributos, efetivamente combinando as funcionalidades destas duas classes.