// Nome: Jo�o Pedro Mac�rio Pereira Alves De Sousa Matr�cula: 2024100954
// Nome: J�lia Soares Ferraz Matr�cula: 2024100857
// Nome: J�lio C�sar do Nascimento Silva Matr�cula: 2024100876
// Turma: 922N

// Nome: Jo�o Pedro Mac�rio Pereira Alves De Sousa Matr�cula: 2024100954
// Nome: J�lia Soares Ferraz Matr�cula: 2024100857
// Nome: J�lio C�sar do Nascimento Silva Matr�cula: 2024100876
// Turma: 922N
#include <stdio.h>

#define LEN 3

void ordena(int *numeros)
{
    int aux;
    for (int i = 0; i < LEN; i++)
        for (int j = i+1; j < LEN; j++)
            if (numeros[i] > numeros[j])
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
}

int main()
{
    int numeros[LEN];

    printf("Digite os valores\n");
    for (int i = 0; i < LEN; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d", numeros+i);
    }
    ordena(numeros);
    printf("Ordem em crescente: ");
    for (int i = 0; i < LEN; i++)
        printf("%d ", numeros[i]);

    return 0;
}

