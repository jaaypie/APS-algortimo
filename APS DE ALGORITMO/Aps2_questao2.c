// Nome: Jo�o Pedro Mac�rio Pereira Alves De Sousa Matr�cula: 2024100954
// Nome: J�lia Soares Ferraz Matr�cula: 2024100857
// Nome: J�lio C�sar do Nascimento Silva Matr�cula: 2024100876
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

