// Nome: Jo�o Pedro Mac�rio Pereira Alves De Sousa Matr�cula: 2024100954
// Nome: J�lia Soares Ferraz Matr�cula: 2024100857
// Nome: J�lio C�sar do Nascimento Silva Matr�cula: 2024100876
// Turma: 922N

#include <stdio.h>
#include <string.h>

#define MAX_LEN 64

int main()
{
    char string[MAX_LEN];

    printf("Digite o nome: ");
    fgets(string, MAX_LEN, stdin);

    int countA = 0;
    for (size_t i = 0; i < strlen(string); i++)
        if (string[i] == 'A' || string[i] == 'a')
            countA++;

    printf("O nome tem %d letras a\n", countA);

    return 0;
}


