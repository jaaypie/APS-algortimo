// Nome: João Pedro Macário Pereira Alves De Sousa Matrícula: 2024100954
// Nome: Júlia Soares Ferraz Matrícula: 2024100857
// Nome: Júlio César do Nascimento Silva Matrícula: 2024100876
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
