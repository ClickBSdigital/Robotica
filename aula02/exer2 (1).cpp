// // 1. Fac,a um programa que leia dois números inteiros a e b, 
// calcule a * b e mostre o resultado na sa'ida
// // padrão para o usuário.
// // Entrada: A primeira linha cont'em dois inteiros a e b.
// // 35
// // Saida: A sa'ida consiste em escrever o resultado da 
// expressão a * b
// // /15

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a * b);
    return 0;
    
}


// ##################################

// Passo 1: #include <stdio.h>
// Essa linha inclui a biblioteca padrão de entrada e saída do C, chamada stdio.h.

// Essa biblioteca permite usar funções como scanf() (para ler dados do teclado) e printf() (para imprimir dados na tela).


// Passo 2: int main(){ ... }
// Essa é a função principal do programa, onde o código começa a ser executado.

// Todo programa C precisa dessa função main().

// int significa que essa função vai retornar um valor inteiro no final (normalmente 0 para indicar que o programa terminou corretamente).


// Passo 3: int a, b;
// Aqui o programa declara duas variáveis inteiras chamadas a e b.

// Variável é um espaço na memória onde você pode armazenar valores.

// int significa que elas armazenarão números inteiros (sem casas decimais).



// Passo 4: scanf("%d %d", &a, &b);
// Essa linha lê dois números inteiros digitados pelo usuário.

// scanf é a função que lê a entrada padrão (teclado).

// "%d %d" indica que o programa espera dois inteiros separados por espaço.

// &a e &b passam o endereço da memória das variáveis para o scanf, para que ele armazene os valores lidos nesses locais.

// Exemplo:
// Se o usuário digitar 5 7, o valor 5 será armazenado em a e o valor 7 será armazenado em b.



// Passo 5: printf("%d\n", a * b);
// Essa linha imprime o resultado da multiplicação de a por b.

// %d é um marcador para um número inteiro que será substituído pelo valor calculado.

// a * b calcula a multiplicação dos dois números.

// \n é o caractere de nova linha, para pular para a próxima linha após imprimir.

// Exemplo:
// Se a = 5 e b = 7, então a * b = 35, e o programa imprime 35 na tela.



// Passo 6: return 0;
// Essa linha indica que o programa terminou com sucesso.

// 0 geralmente significa que não houve erros.

// Resumo do funcionamento
// O programa lê dois números inteiros do usuário.

// Calcula a multiplicação desses dois números.

// Imprime o resultado na tela.

// Termina a execução com sucesso.