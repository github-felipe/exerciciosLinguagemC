#include <stdio.h>
#include <string.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int idade1, idade2;
    double media;
    char nome1[50], nome2[50];

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fgets(nome1, 50, stdin);
    printf("Idade: ");
    scanf("%i", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    limpar_entrada();
    fgets(nome2, 50, stdin);
    printf("Idade: ");
    scanf("%i", &idade2);

    media = (double) (idade1 + idade2) / 2;

    printf("A idade média de %s e %s é %.1lf anos", nome1, nome2, media);

    return 0;
}
