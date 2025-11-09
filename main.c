#include <stdio.h>
#include <stdbool.h>

int main()
{
    float num1, num2, result;
    int option;
    bool looping;
    
    looping = true;
      
    while(looping) {
        
    printf("=== Calculadora ===\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");

    printf("Escolha uma opção: ");
    scanf("%d", &option);
    
    if(option == 0){
        printf("Encerrando o programa...\n");
        looping = false;
        break;
    }

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);
  
    switch(option) {
        case 1:
        result = num1 + num2;
        printf("result: %.2f\n", result);
        break;
        case 2:
        result = num1 - num2;
        printf("result: %.2f\n", result);
        break;
        case 3:
        result = num1 / num2;
         if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Erro: divisão por zero!\n");
                return 1;
            }
            printf("result: %.2f\n", result);
             break;
            case 4:
            result = num1 * num2;
             printf("result: %.2f\n", result);
        break;
        default:
         printf("Opção inválida!\n");
    }
  }
    return 0;
}