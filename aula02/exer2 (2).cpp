// 2. Fac,a um programa que leia a matr'icula, a turma, 
// e a m'edia final de um estudante, e ao final informe
// os valores lidos pelo usuário.
// 55 C 8.5
// O estudante de matricula 55, turma C, obteve media = 8.5
// 

#include <stdio.h>

int main() {
    int matricula;
    char turma;
    float media;
    scanf("%d %c %f", &matricula, &turma, &media);
    printf("O estudante de matricula %d, turma %c, obteve media = %.1f\n", matricula, turma, media);
    return 0;
}


// ======================================================

// Passo 1: #include <stdio.h>
// Inclui a biblioteca padrão de entrada e saída do C.

// Permite usar funções como scanf() para ler dados e printf() para imprimir dados.

// Passo 2: int main() { ... }
// Função principal do programa.

// Aqui começa e termina a execução do código.

// Passo 3: Declaração das variáveis
// c
// Copiar
// Editar
// int matricula;
// char turma;
// float media;
// matricula é uma variável do tipo inteiro (int), para armazenar o número de matrícula do estudante.

// turma é uma variável do tipo caractere (char), para armazenar a turma (uma letra).

// media é uma variável do tipo ponto flutuante (float), para armazenar a média do estudante, que pode ser um número com casas decimais.

// Passo 4: Leitura dos dados com scanf
// c
// Copiar
// Editar
// scanf("%d %c %f", &matricula, &turma, &media);
// scanf lê os dados que o usuário digitar.

// %d indica que vai ler um número inteiro (para matricula).

// %c indica que vai ler um caractere (para turma).

// %f indica que vai ler um número decimal do tipo float (para media).

// &matricula, &turma e &media passam os endereços das variáveis para o scanf armazenar os valores lidos.

// Exemplo de entrada:

// css
// Copiar
// Editar
// 1234 A 7.5
// Isso vai fazer:

// matricula = 1234

// turma = 'A'

// media = 7.5

// Passo 5: Impressão dos dados com printf
// c
// Copiar
// Editar
// printf("O estudante de matricula %d, turma %c, obteve media = %.1f\n", matricula, turma, media);
// printf exibe uma mensagem formatada na tela.

// %d será substituído pelo valor da variável matricula.

// %c será substituído pelo caractere da variável turma.

// %.1f será substituído pelo valor da variável media, exibido com uma casa decimal (por exemplo, 7.5).

// \n imprime uma nova linha (quebra de linha).

// Com a entrada acima, a saída será:

// java
// Copiar
// Editar
// O estudante de matricula 1234, turma A, obteve media = 7.5
// Passo 6: return 0;
// Indica que o programa terminou corretamente.

// Resumo
// O programa:

// Recebe três dados do usuário: número de matrícula, turma (uma letra), e média (número decimal).

// Imprime uma frase formatada mostrando esses dados.

// Termina a execução.