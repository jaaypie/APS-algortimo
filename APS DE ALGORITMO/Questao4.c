// Nome: Jo�o Pedro Mac�rio Pereira Alves De Sousa Matr�cula: 2024100954
// Nome: J�lia Soares Ferraz Matr�cula: 2024100857
// Nome: J�lio C�sar do Nascimento Silva Matr�cula: 2024100876
// Turma: 922N

#include <stdio.h>

int main()
{
    int input;
    printf("Digite o valor de n: ");
    scanf("%d", &input);

    for (int i = input; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
