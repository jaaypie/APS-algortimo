// Nome: João Pedro Macário Pereira Alves De Sousa Matrícula: 2024100954
// Nome: Júlia Soares Ferraz Matrícula: 2024100857
// Nome: Júlio César do Nascimento Silva Matrícula: 2024100876
// Turma: 922N

#include <stdio.h>

int main()
{
    int input;

    printf("Digite o numero n: ");
    scanf("%d", &input);

    unsigned int soma = 0;

    printf("\nPares: ");
    for (int i = 0; i < input; i+=2)
    {
        printf("%d-", i);
        soma += i;
    }

    printf("\nSoma dos pares %d\n", soma);

    soma = 0;
    printf("\nImpares: ");
    for (int i = 1; i < input; i+=2)
    {
        printf("%d-", i);
        soma += i;
    }
    printf("\nSoma dos impares %d\n", soma);
    return 0;
}

