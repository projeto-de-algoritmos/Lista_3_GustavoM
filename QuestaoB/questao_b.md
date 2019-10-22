# Questão B. Zmei Gorynich

[Enunciado Questão B](https://codeforces.com/problemset/problem/1217/B)

## Resolução

Declara-se uma variável inteira (t) para armazenar o número de casos de teste. Onde cada caso de teste é uma iteração do laço while.

#### Caso de Teste
Declara-se duas variáveis inteiras (n, x) para armazenar o número de ataques disponíveis e o número de cabeças do inimigo no caso de teste.

Inicia-se com zero as variáveis que representam o ataque que retira mais cabeças do inimigo (max_blow) e o ataque que destrói o inimigo (max_damage).

No laço for são iterados os ataques.

Em cada iteração do laço for são recebidos (em variáveis) o número de cabeças do inimigo que serão cortadas com o ataque e o número de cabeças que nascerão. Se esse ataque compensar, ou seja, o número de cabeças cortadas for maior que o número de cabeças que nascerão, a variável max_blow é atualizada. Por fim, a variável max_damage também é atualizada.

Ao final do laço for, substrai-se do número de cabeças o valor da variável max_damage (ataque final) e atribui-se 1 à variável que representa o número de ataques feitos.

Se o inimigo ainda possui cabeças e o ataque que retira mais cabeças é igual à zero, então não é possível derrotar o inimigo (imprimir -1 como resultado). 

Se o inimigo ainda possui cabeças e o ataque que retira mais cabeças é maior que zero, divide-se o número de cabeças do inimigo pelo valor do ataque que retira mais cabeças e soma-se o resultado (arredondado para cima) ao número de ataques.

Para finalizar, imprimi-se o valor do número de ataques necessários. 
