// 3. Fac,a um programa que leia dois números inteiros e calcule o primeiro número elevado à potência
// do segundo. Depois, calcule a raiz quadrada do resultado.
// Entrada: A primeira linha cont'em dois inteiros a, b
// Sa'ida: A sa'ida consiste em escrever o valor de a elevado à b, e apresentar a raiz quadrada do
// resultado.
// // 16 4


#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    double potencia = pow(a, b);
    double raiz = sqrt(potencia);
    printf("%.0lf %.2lf\n", potencia, raiz);
    return 0;
}


// ===========================================================

// 🔍 Explicação passo a passo:
// 1. #include <stdio.h>
// Inclui a biblioteca padrão de entrada e saída, que permite usar funções como scanf() e printf().

// 2. #include <math.h>
// Inclui a biblioteca matemática do C.

// Essa biblioteca é necessária para usar funções como:

// pow(base, expoente) → potência

// sqrt(numero) → raiz quadrada

// 3. int main() {
// Início da função principal do programa.

// 4. int a, b;
// Declara duas variáveis inteiras:

// a → base da potência

// b → expoente

// 5. scanf("%d %d", &a, &b);
// Lê dois inteiros digitados pelo usuário e armazena em a e b.

// Exemplo de entrada:

// Copiar
// Editar
// 3 4
// Agora: a = 3, b = 4

// 6. double potencia = pow(a, b);
// Calcula a potência de a elevado a b usando a função pow() da math.h.

// Exemplo:

// c
// Copiar
// Editar
// pow(3, 4) = 81.0
// Obs: pow() retorna um valor do tipo double (número com ponto decimal), por isso a variável potencia é double.

// 7. double raiz = sqrt(potencia);
// Calcula a raiz quadrada do valor da potência.

// Usa a função sqrt() da math.h.

// Exemplo:

// c
// Copiar
// Editar
// sqrt(81.0) = 9.0
// 8. printf("%.0lf %.2lf\n", potencia, raiz);
// Exibe os resultados na tela:

// %.0lf → imprime o valor da potência sem casas decimais.

// %.2lf → imprime o valor da raiz com duas casas decimais.

// \n → quebra de linha.

// Saída com entrada 3 4:

// Copiar
// Editar
// 81 9.00
// 9. return 0;
// Indica que o programa terminou com sucesso.

// ✅ Resumo do que o programa faz:
// Lê dois números inteiros a e b.

// Calcula a^b (a elevado à potência b).

// Calcula a raiz quadrada do resultado da potência.

// Mostra ambos os valores: a potência (sem casas) e a raiz (com duas casas).

