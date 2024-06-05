// Nome: Jo�o Pedro Mac�rio Pereira Alves De Sousa Matr�cula: 2024100954
// Nome: J�lia Soares Ferraz Matr�cula: 2024100857
// Nome: J�lio C�sar do Nascimento Silva Matr�cula: 2024100876
// Turma: 922N

#include <stdio.h>
#include <string.h>

#define MAX_LEN 64

int main()
{   
    int numero;
    short binario[MAX_LEN];

    printf("Digite o numero: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        int count = 0;
        while (numero != 1)
        {
            binario[count++] = numero % 2;
            numero /= 2;
        }
        binario[count] = 1;
        printf("\nO numero em binario: ");
        for (int i = count; i >= 0 ; i--)
            printf("%d", binario[i]);
        
        printf("\n\nDigite o proximo numero: ");
        scanf("%d", &numero);
    }

    return 0;
}
