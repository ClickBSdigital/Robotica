// 5. Fac,a um programa que receba tr^es notas e seus 
// respectivos pesos, calcule e mostre a m'edia aritm'etica
// entre elas.
// Entrada: A entrada cont'em um float n1, um inteiro p1, 
// um float n2, um inteiro p2, um float n3 e um inteiro p3.
// 10 7 41 1 1
// Sa'da: A sa'da consiste em calcular e exibir 
// a m'edia aritm'etica entre as notas.
// 8.33

#include <stdio.h>

int main() {
    float n1, n2, n3;
    int p1, p2, p3;
    scanf("%f %d %f %d %f %d", &n1, &p1, &n2, &p2, &n3, &p3);
    float media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
    printf("%.2f\n", media);
    return 0;
}


// ============================================================

// 🪜 Passo a passo:
// 1. #include <stdio.h>
// Isso importa a biblioteca que permite usar scanf() e printf().

// 2. Declaração das variáveis:
// c
// Copiar
// Editar
// float n1, n2, n3;
// int p1, p2, p3;
// n1, n2, n3 → são as três notas do aluno.

// p1, p2, p3 → são os pesos dessas notas.

// 3. Leitura dos valores:
// c
// Copiar
// Editar
// scanf("%f %d %f %d %f %d", &n1, &p1, &n2, &p2, &n3, &p3);
// Aqui ele lê 6 valores digitados pelo usuário, nessa ordem:

// nota1 peso1 nota2 peso2 nota3 peso3

// Exemplo de entrada:

// Copiar
// Editar
// 7.0 2 8.5 3 9.0 5
// Ou seja:

// Nota 1 = 7.0 com peso 2

// Nota 2 = 8.5 com peso 3

// Nota 3 = 9.0 com peso 5

// 4. Cálculo da média ponderada:
// c
// Copiar
// Editar
// float media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
// O que isso faz?
// Multiplica cada nota pelo seu peso:

// Copiar
// Editar
// 7.0 * 2 = 14.0  
// 8.5 * 3 = 25.5  
// 9.0 * 5 = 45.0  
// Soma tudo:

// Copiar
// Editar
// 14.0 + 25.5 + 45.0 = 84.5
// Soma os pesos:

// Copiar
// Editar
// 2 + 3 + 5 = 10
// Faz a divisão:

// Copiar
// Editar
// 84.5 / 10 = 8.45
// 5. Mostra o resultado na tela:
// c
// Copiar
// Editar
// printf("%.2f\n", media);
// Isso mostra a média com 2 casas decimais.

// No nosso exemplo:

// Copiar
// Editar
// 8.45
// 6. return 0;
// Indica que o programa terminou tudo certo.

// ✅ Resumão:
// Esse programa:

// Lê 3 notas e seus respectivos pesos.

// Calcula a média ponderada.

// Mostra a média na tela com duas casas decimais.

// Se quiser, posso te ajudar a fazer uma versão com mais 
// notas, com verificação de erros ou até uma interface gráfica. 
// É só pedir! 👨‍💻






// Você disse:
// explique; "%.2f\n"


// O ChatGPT disse:
// Claro, Eliandro! Vamos explicar o que significa isso aqui:

// c
// Copiar
// Editar
// "%.2f\n"
// É uma formatação de texto usada no printf() do C. Vamos 
// separar em partes pra você entender direitinho:

// 🔍 Parte por parte:
// ✅ %
// Indica que vai inserir um valor no lugar (substituir por 
// uma variável).

// ✅ .2
// Isso quer dizer: 2 casas decimais.

// Exemplo:
// Se o número for 8.45678, ele vai mostrar 8.46 (arredondado).

// ✅ f
// Significa que o valor é do tipo float (ou double), ou seja, 
// um número com vírgula (ponto no C).

// ✅ \n
// Representa uma quebra de linha.
// Quando o programa imprimir o valor, ele vai pular pra próxima
//  linha.

// 🧠 Exemplo completo:
// c
// Copiar
// Editar
// float media = 8.45678;
// printf("%.2f\n", media);
// Saída:

// Copiar
// Editar
// 8.46
// ✅ Resumindo:
// "%.2f\n" quer dizer:

// “Mostre um número com 2 casas decimais e pule uma linha depois.”

// Se quiser mostrar com 1 casa decimal: "%.1f\n"
// Com 3 casas: "%.3f\n"
// E por aí vai! 😉

// Se tiver dúvidas com outros formatos, posso te mostrar uma 
// tabelinha com todos!






// Você disse:
// scanf("%f %d %f %d %f %d", &n1, &p1, &n2, &p2, &n3, &p3); : 
// explique passo a passo


// O ChatGPT disse:
// Claro, Eliandro! Vamos explicar passo a passo e de forma bem 
// simples essa linha aqui:

// c
// Copiar
// Editar
// scanf("%f %d %f %d %f %d", &n1, &p1, &n2, &p2, &n3, &p3);
// 🧠 O que é scanf?
// É a função em C que lê dados digitados pelo usuário no teclado.
// Ela guarda esses dados em variáveis.

// 📦 Formato geral do scanf
// c
// Copiar
// Editar
// scanf("formato", &variável1, &variável2, ...);
// A string de formato (ex: "%f %d") diz que tipo de dado será lido.

// Os símbolos & significam “coloque o valor dentro da variável”.

// 📕 Explicando a sua linha:
// c
// Copiar
// Editar
// scanf("%f %d %f %d %f %d", &n1, &p1, &n2, &p2, &n3, &p3);
// Você está lendo 6 valores na sequência:

// Ordem	Tipo	Lê	Guarda em
// 1º	%f	um número com vírgula (ex: 7.5)	n1
// 2º	%d	um número inteiro	p1
// 3º	%f	outro número com vírgula	n2
// 4º	%d	outro número inteiro	p2
// 5º	%f	outro número com vírgula	n3
// 6º	%d	outro número inteiro	p3

// ✍️ Exemplo prático
// Se o usuário digitar:

// Copiar
// Editar
// 7.0 2 8.5 3 9.0 5
// A função scanf vai guardar:

// c
// Copiar
// Editar
// n1 = 7.0
// p1 = 2
// n2 = 8.5
// p2 = 3
// n3 = 9.0
// p3 = 5
// ❗ Por que tem & antes das variáveis?
// Porque em C, quando você quer preencher uma variável com 
// scanf, você precisa dizer o endereço da variável usando & 
// (isso é obrigatório para scanf funcionar).

// ✅ Resumão
// scanf("%f %d %f %d %f %d", ...) → lê 3 números com 
// vírgula (float) e 3 inteiros (int), intercalados.

// Cada valor digitado vai para a variável correspondente.

// O & é obrigatório para scanf conseguir alterar o valor 
// da variável.