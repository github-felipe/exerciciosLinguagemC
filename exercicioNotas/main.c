#include <stdio.h>

int main()
{
    double nota1, nota2, mediaf;

    printf("Digite a primeira média: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda média: ");
    scanf("%lf", &nota2);

    mediaf = nota1 + nota2;

    printf("A sua média final foi de: %.1lf\n", mediaf);
    if(mediaf <= 60.0){
        printf("Reprovado(a)");
    } else {
        printf("Aprovado(a)");
    }


    return 0;
}
