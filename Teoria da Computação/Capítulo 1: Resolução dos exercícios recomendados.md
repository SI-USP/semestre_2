# Capítulo 1: Resolução dos exercícios recomendados

## Exercício 1.1

The following are the state diagrams of two AFDs, $M_1$ and $M_2$. Answer the following questions about each of these machines.

<img src="file:///home/user/Documents/Drives/USP/Introdução%20a%20Ciência%20da%20Computação/Imagens/2022-03-31-10-41-16-image.png" title="" alt="" data-align="center">

**a.** What is the start state?

The start state is that which is indicated by the circle pointed at by an arrow originated from the blank of the page. So, on both machines, the start state is the one labelled "$q_1$".

**b.** What is the set of accept states?

The accept state is indicated by two concentric circles. Therefore, on $M_1$ it is $\{q_2\}$, while on $M_2$ it is $\{q_1, q_4\}$.

**c.** On $M_1$ it is $(q_1, q_2, q_3, q_1, q_1)$ and on $M_2$ it is $(q_1, q_1, q_1, q_2, q_4)$.

**d.** $M_1$ does not, but $M_2$ does.

**e.** No, neither of them. These are deterministic automata and, as such, require symbols of their accepted language ${a,b}$ in order to change states.

## Exercício 1.2

Give the formal description of the machines $M_1$ and $M_2$ pictured in Exercise 1.1.

### Answer

- $M_1 = (Q, \Sigma,\delta, q_1, q_2)$, where:
  
  - $Q = \{q_1, q_2, q_3\}$;
  
  - $\Sigma = \{a,b\}$;
  
  - | $\bm \delta$ | a     | b     |
    | ------------ |:-----:|:-----:|
    | $q_1$        | $q_2$ | $q_1$ |
    | $q_2$        | $q_3$ | $q_3$ |
    | $q_3$        | $q_2$ | $q_1$ |
  
  - $q_1$ is the start state, and
  
  - $q_2$ is the accept state.

- $M_2 = (Q', \Sigma, \delta ', q_1, \{q_1,q_2\})$, where:
  
  - $Q' = \{q_1, q_2, q_3, q_4\}$;
  
  - $\Sigma = {a, b}$
  
  - | $\bm \delta'$ | **a** | **b** |
    | ------------- |:-----:|:-----:|
    | $q_1$         | $q_1$ | $q_2$ |
    | $q_2$         | $q_3$ | $q_4$ |
    | $q_3$         | $q_2$ | $q_1$ |
    | $q_4$         | $q_3$ | $q_4$ |
  
  - $q_1$ is the start state, and
  
  - $\{q_1, q_4\}$ are accept states.

## Exercício 1.3

The formal description of a **AFD** $M$ is $(\{q_1, q_2, q_3, q_4, q_5\}, \{u, d\}, δ, q_3 , \{q_3\})$ ,
where $δ$ is given by the following table. Give the state diagram of this machine.

| $\bm \delta$ | $\bm u$ | $\bm d$ |
| ------------ |:-------:|:-------:|
| $q_1$        | $q_1$   | $q_2$   |
| $q_2$        | $q_1$   | $q_3$   |
| $q_3$        | $q_2$   | $q_4$   |
| $q_4$        | $q_3$   | $q_5$   |
| $q_5$        | $q_4$   | $q_5$   |

### Answer

![](/home/user/Documents/Drives/USP/Introdução%20a%20Ciência%20da%20Computação/Imagens/2022-03-31-12-02-48-image.png)