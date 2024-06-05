// Nome: Jo�o Pedro Mac�rio Pereira Alves De Sousa Matr�cula: 2024100954
// Nome: J�lia Soares Ferraz Matr�cula: 2024100857
// Nome: J�lio C�sar do Nascimento Silva Matr�cula: 2024100876
// Turma: 922N
#include <stdio.h>

// Define o n�mero de dias na semana
#define NUM_DIAS 7 

int main() {
    // Declara um array para armazenar as temperaturas
    int temperatura[NUM_DIAS];

    // Solicita ao usu�rio que digite as temperaturas registradas durante a semana
    printf("Digite as temperaturas dos dias da semana\n");

    // Loop para obter as temperaturas para cada dia da semana
    for (int i = 0; i < NUM_DIAS; i++) 
    {
        // Exibe o n�mero do dia
        printf("Dia %d: ", i+1);
        // Obt�m a temperatura para o dia atual e armazena no array
        scanf("%d", temperatura+i);
    }

    // Encontra o dia mais quente e o dia mais frio
    int diaMaisQuente = 0, diaMaisFrio = 0;
    for (int i = 0; i < NUM_DIAS; i++)
    {
        // Verifica se a temperatura do dia atual � maior que a temperatura do dia mais quente at� agora
        if (temperatura[i] > temperatura[diaMaisQuente]) 
            diaMaisQuente = i; // Atualiza o �ndice do dia mais quente
        
        // Verifica se a temperatura do dia atual � menor que a temperatura do dia mais frio at� agora
        if (temperatura[i] < temperatura[diaMaisFrio]) 
            diaMaisFrio = i; // Atualiza o �ndice do dia mais frio
    }

    // Exibe o dia mais quente e sua temperatura
    printf("O dia mas quente foi o dia %d, com temperatura de %d\n", diaMaisQuente+1, temperatura[diaMaisQuente]);
    // Exibe o dia mais frio e sua temperatura
    printf("O dia mas frio foi o dia %d, com temperatura de %d\n", diaMaisFrio+1, temperatura[diaMaisFrio]);

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}

