// 4. Fac,a um programa que leia o número de matricula do funcionário, o número de horas trabalhadas
// mensais, o valor que ele recebe por hora e o número de filhos. Calcular e escrever o salário deste
// funcionário, sendo que cada filho acrescenta 10% no salário do funcionário.
// Entrada: A entrada cont'em um inteiro a, um float b, um floatc e um inteiro d
// 135 40 25 4
// Sa'ida: A sa'ida consiste em calcular e exibir o salário final do funcionário,.
// Salário final do funcionário: 1400

#include <stdio.h>

int main() {
    int matricula, filhos;
    float horas, valorHora, salario;
    scanf("%d %f %f %d", &matricula, &horas, &valorHora, &filhos);
    salario = horas * valorHora;
    salario += salario * (filhos * 0.10);
    printf("Salario final do funcionario: %.0f\n", salario);
    return 0;
}


// ===================================================

// 🧠 O que esse programa faz?
// Ele calcula o salário final de um funcionário, com um bônus de 10% por cada filho que ele tiver.

// 🪜 PASSO A PASSO:
// 1. #include <stdio.h>
// Isso serve pra poder usar scanf (ler dados) e printf (mostrar na tela).

// 2. Dentro da main():
// ➤ int matricula, filhos;
// matricula: só guarda o número do funcionário (mas nem é usado no cálculo).

// filhos: quantos filhos o funcionário tem.

// ➤ float horas, valorHora, salario;
// horas: quantas horas ele trabalhou.

// valorHora: quanto ele ganha por hora.

// salario: vai guardar o valor do salário total com o bônus.

// 3. scanf("%d %f %f %d", &matricula, &horas, &valorHora, &filhos);
// Aqui ele lê do teclado esses quatro dados, nessa ordem:

// matrícula → horas trabalhadas → valor da hora → número de filhos

// Exemplo de entrada:

// yaml
// Copiar
// Editar
// 1234 40 20 2
// Significa:

// Matrícula: 1234

// Trabalhou 40 horas

// Ganha R$ 20 por hora

// Tem 2 filhos

// 4. salario = horas * valorHora;
// Multiplica as horas pelo valor da hora para saber o salário base.

// No exemplo:

// Copiar
// Editar
// 40 * 20 = 800
// 5. salario += salario * (filhos * 0.10);
// Essa parte calcula o bônus de 10% para cada filho.

// No exemplo:

// Tem 2 filhos → 2 × 10% = 20%

// 20% de 800 = 160

// Salário final = 800 + 160 = 960

// 6. printf("Salario final do funcionario: %.0f\n", salario);
// Mostra o salário final na tela, sem casas decimais (%.0f).

// No exemplo, a saída seria:

// cpp
// Copiar
// Editar
// Salario final do funcionario: 960
// 7. return 0;
// Só serve pra indicar que o programa terminou tudo certinho.

// ✅ RESUMÃO PRA QUEM É LEIGO:
// O programa lê os dados do funcionário.

// Calcula o salário com base nas horas trabalhadas.

// Dá um bônus de 10% por filho.

// Mostra o salário final na tela.