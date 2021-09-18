# Semana 01

> 16/08/21 a 21/08. Por Guilherme de Abreu Barreto, nUSP: 12543033.

Respostas aos exercícios propostos.

## Exercício 01

Output com variável `nusp` do tipo `int`:

```
Imprimindo inteiro: 12543033
Imprimindo numero: 12543033
Imprimindo float (com cast): 12543033.000000
Imprimindo quociente: 6271516
Imprimindo resto: 1
Imprimindo quadrado: -1270180687
```

Notei que o resultado do quadrado é incorreto, imaginei ser uma questão de insuficiência da capacidade do tipo `int` para o armazenamento do resultado. Então repeti o procedimento designando à variável `nusp` o tipo `long long int`[^1] e assim obtive a resposta esperada:

```
Digite seu número USP: Imprimindo inteiro: 12543033
Imprimindo numero: 12543033
Imprimindo float (com cast): 12543033.000000
Imprimindo quociente: 6271516
Imprimindo resto: 1
Imprimindo quadrado: 157327676839089
```

## Exercício 02

Output:

```
x: 7 y: 13 z: 0x7fffdd1a03f8
&x: 0x7fffdd1a03f8 &y: 0x7fffdd1a03fc &z: 0x7fffdd1a0400
Novo valor de x: 20
```

Não obstante, o código, ao ser compilado, produziu os seguintes alertas:

```
e2.c: In function ‘main’:
e2.c:7:33: warning: format ‘%p’ expects argument of type ‘void *’, but argument 4 has type ‘int *’ [-Wformat=]
    7 |         printf("x: %i y: %i z: %p\n", x, y, z);
      |                                ~^           ~
      |                                 |           |
      |                                 void *      int *
      |                                %ls
e2.c:8:22: warning: format ‘%p’ expects argument of type ‘void *’, but argument 2 has type ‘int *’ [-Wformat=]
    8 |         printf("&x: %p &y: %p &z: %p\n", &x, &y, &z);
      |                     ~^                   ~~
      |                      |                   |
      |                      void *              int *
      |                     %ls
e2.c:8:29: warning: format ‘%p’ expects argument of type ‘void *’, but argument 3 has type ‘int *’ [-Wformat=]
    8 |         printf("&x: %p &y: %p &z: %p\n", &x, &y, &z);
      |                            ~^                ~~
      |                             |                |
      |                             void *           int *
      |                            %ls
e2.c:8:36: warning: format ‘%p’ expects argument of type ‘void *’, but argument 4 has type ‘int **’ [-Wformat=]
    8 |         printf("&x: %p &y: %p &z: %p\n", &x, &y, &z);
      |                                   ~^             ~~
      |                                    |             |
      |                                    void *        int **
```

[^1]: Foi necessário o uso da *flag* `-std=c99` para que o `gcc` compilase o código sem emitir alertas.