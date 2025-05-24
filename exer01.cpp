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
    char operacao;
    scanf("%f %c %f",&num01, &operacao, &num02);
    float resultado;
    boolean C = true
    
    
    switch(operacao){
        case '+':
            resultado = num01 + num02;
            break;
        case '-':
            resultado = num01 - num02;
            break; 
        case '*':
            resultado = num01 * num02;
            break;            
        case '/':
            resultado = num01 / num02;
            break;        
        default:
            printf("Insira valores válidos");
        
    } 
    if(C == true)
        printf("%.2f", resultado);
    

    return 0;
}