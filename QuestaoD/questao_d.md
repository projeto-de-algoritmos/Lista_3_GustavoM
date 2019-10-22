# Questão D. Restore Permutation

[Enunciado Questão D](https://codeforces.com/problemset/problem/1208/D)

## Resolução

Declara-se uma variável interia (n) para armazenar o número de elementos de um array. Esse array vai ser uma permutação de n.

Após isso, recebe-se um vetor de n números. Cada posição do vetor é relacionada com a posição de mesmo índice no array gerado anteriormente e o valor de cada posição do vetor é a soma dos valores anteriores e menores que o valor da posição do array a que está relacionado.

Percorre-se este vetor de trás para frente para encontrar os valores das posições do array.

##### Exemplo:

- Array permutação de 5;
- Vetor [0,1,1,1,10]

Inverso do Vetor = [10, 1, 1, 1, 0]

10 = 1 + 2 + 3 + 4 -> Número > 4    
Array = [ ... , 5]

1 = 1 -> Menor número > 1    
Array = [ ... , 2, 5]

1 = 1 -> Menor número **disponível** > 1    
Array = [ ... , 3, 2, 5]

1 = 1 -> Menor número **disponível** > 1    
Array = [ ... , 4, 3, 2, 5]

0 = 0 -> Número que não possui menores    
Array = [1, 4, 3, 2, 5]

#### Observações

Obs.: O array utilizado é uma BITree (logn).

Obs. 1: Para encontrar os elementos foi utilizada a busca binária (logn).

Complexidade do algoritmo: nlog²n
