/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

int main() {
    float num01;
    float num02;
    std::string operacao;
    
    
    std::cout << "Digite o primeiro número: ";
    std::cin >> num01;

    std::cout << "Digite o segundo número: ";
    std::cin >> num02;

    std::cout << "Digite a operação (Soma, Subtração, Multiplicação ou Divisão): ";
    std::cin >> operacao;
    
     if (operacao == "Soma") {
        std::cout << "Resultado: " << (num01 + num02) << std::endl;
    }
    else if (operacao == "Subtracao" || operacao == "Subtração") {
        std::cout << "Resultado: " << (num01 - num02) << std::endl;
    }
    else if (operacao == "Multiplicacao" || operacao == "Multiplicação") {
        std::cout << "Resultado: " << (num01 * num02) << std::endl;
    }
    else if (operacao == "Divisao" || operacao == "Divisão") {
        if (num02 != 0) {
            std::cout << "Resultado: " << (num01 / num02) << std::endl;
        } else {
            std::cout << "Erro: divisão por zero!" << std::endl;
        }
    }
    else {
        std::cout << "Operação inválida!" << std::endl;
    }

    return 0;
}