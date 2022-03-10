# Argumentos

## 1.

**(a)** "*Pode-se vir ao trabalho de ônibus ou carro. Fulano veio ao trabalho de ônibus, logo, não usou seu carro*". Este argumento é falacioso pois as alternativas não são mutuamente exclusivas: fulano pode ter percorrido diferentes partes do trajeto com cada um dos modos de transporte.

**(b)** "Se estiver chovendo, fulano virá com um guarda-chuva. Fulano veio com um guarda-chuva, logo, choveu". Este argumento é falacioso pois o pressuposto e o consequente não se implicam mutuamente. Embora a ocorrência de chuva leve fulano a carregar seu guarda-chuva consigo, por outro lado a não ocorrência de chuva não é proibitiva para que fulano carregue seu guarda-chuva.

**(c)** "Se estiver chovendo, fulano virá com um guarda-chuva. Não choveu, então fulano não virá com um guarda-chuva." A mesma falácia do argumento anterior, mas na sua forma negativa.

## 2.

**(a)** isLower(7, 4) ⟶ ¬ isPrime(7) ∴  ¬ isLower(7, 4) ⟶ isPrime(7)

Se admitimos que ser ou não menor que quatro é condição para não ser ou ser, respectivamente, um número primo, então sim, a proposta é válida. Não obstante, essa condição não é coerente com a definição de número primo.

**(b)** isEqual(l~1~, l~2~) ⟶ isEqual(a~1~, a~2~) ∴ ¬isEqual(l~1~, l~2~) ⟶ ¬ isEqual(a~1~, a~2~)

A conclusão apresentada é correta (congruente com a definição de triângulo isóceles), mas a argumentação feita é inválida (falácia da negação do antecedente).

## 3.

Considerando p ≡ "hoje é terça feira" e q ≡ "João irá trabalhar", a proposição $(p \to q) \land p \to q$ sendo verdadeira equivale à:

Se hoje é terça-feira então João irá trabalhar.

Hoje é terça-feira.

Logo, João irá trabalhar.

## 4.

De maneira análoga ao exemplo anterior, temos que:

Se hoje é terça-feira então João irá trabalhar.

João não irá trabalhar.

Hoje não é terça-feira.

## 5.

**Modus ponendo tollens:** $\neg (p \land q), p \vdash \neg q$

Não é possível Pedro e Quércia ambos ganharem em uma mesma partida de xadrez.

Pedro venceu a partida de xadrez.

Logo, Quércia perdeu a partida.

**Modus tollendo ponens:** $p \lor q, \neg p \vdash q$

Por certo, Pedro ou Quércia compareceriam à reunião.

Pedro não compareceu.

Então Quércia compareceu.

## 6.

| $p$                         | V   | V   | F   | F   |
| --------------------------- |:---:|:---:|:---:|:---:|
| $q$                         | V   | F   | V   | F   |
| $p \to q$                   | V   | F   | V   | V   |
| $\neg p \to \neg q$         | V   | V   | F   | V   |
| $q \to p$                   | V   | V   | F   | V   |
| $\neg q \to \neg p$         | V   | F   | V   | V   |
| $(p \to q) \land (q \to p)$ | V   | F   | F   | V   |
| $p \iff q$                  | V   | F   | F   | V   |