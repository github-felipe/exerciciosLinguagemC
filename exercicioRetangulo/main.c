#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Digite o tamanho da base do retângulo: ");
    scanf("%lf", &base);

    printf("Digite agora a altura desse retângulo: ");
    scanf("%lf", &altura);

    area = base * altura;

    perimetro = base * 2 + altura * 2;

    diagonal = sqrt(base * base + altura * altura);

    printf("Área: %.4lf\n", area);
    printf("Perímetro: %.4lf\n", perimetro);
    printf("Diagonal: %.4lf\n", diagonal);

    return 0;
}
