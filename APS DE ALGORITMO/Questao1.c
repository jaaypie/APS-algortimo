#include <stdio.h>
#include <stdlib.h>

// Nome: João Pedro Macário Pereira Alves De Sousa Matrícula: 2024100954
// Nome: Júlia Soares Ferraz Matrícula: 2024100857
// Nome: Júlio César do Nascimento Silva Matrícula: 2024100876
// Turma: 922N

using namespace std;

int main() {
    int n, soma = 0;
    
    printf("Digite um numero inteiro positivo :");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    printf("A soma dos primeiros numeros naturais ate %d e %d\n",n, soma );
    
    return 0;
    system("pause");
}


