// Nome: João Pedro Macário Pereira Alves De Sousa Matrícula: 2024100954
// Nome: Júlia Soares Ferraz Matrícula: 2024100857
// Nome: Júlio César do Nascimento Silva Matrícula: 2024100876
// Turma: 922N

// Nome: João Pedro Macário Pereira Alves De Sousa Matrícula: 2024100954
// Nome: Júlia Soares Ferraz Matrícula: 2024100857
// Nome: Júlio César do Nascimento Silva Matrícula: 2024100876
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

