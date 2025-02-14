#include <stdio.h>

int main()
{

    double largura, comprimento, valorm2, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Qual é o valor do metro quadrado do terreno? R$:");
    scanf("%lf", &valorm2);

    area = largura * comprimento;
    preco = area * valorm2;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preço do terreno = R$:%.2lf", preco);

}
