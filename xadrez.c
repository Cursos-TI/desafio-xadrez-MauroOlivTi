#include <stdio.h>

int main()
{

    // Declaração das variáveis de controle para cada peça
    int contadortorre = 1, contadorrainha = 1, contadortorremax, contadorrainhamax, contadorbispomax;

    // Solicita ao usuário o número de movimentos para a Torre
    printf("Digite quantos movimentos quer que a Torre faca: ");
    scanf("%d", &contadortorremax);

    // Informa início da movimentação da Torre
    printf("\n**Movimentacao da Torre**\n");
  
    // Estrutura do-while para simular o movimento da Torre para a direita
    do
    {
        // Imprime o número do movimento e a direção "Direita"
        printf("\nMovimento %d - Direita", contadortorre);
        contadortorre++; // Incrementa o contador de movimentos da Torre

    } while (contadortorre <= contadortorremax); // Repete até atingir o número de movimentos desejado

    // Solicita ao usuário o número de movimentos para a Rainha
    printf("\n\nDigite quantos movimentos quer que a Rainha faca: ");
    scanf("%d", &contadorrainhamax);

    // Informa início da movimentação da Rainha
    printf("\n**Movimentacao da rainha**\n");

    // Estrutura while para simular o movimento da Rainha para a esquerda
    while (contadorrainha <= contadorrainhamax)
    {
        // Imprime o número do movimento e a direção "Esquerda"
        printf("\nMovimento %d - Esquerda", contadorrainha);
        contadorrainha++; // Incrementa o contador de movimentos da Rainha
    }

    // Solicita ao usuário o número de movimentos para o Bispo
    printf("\n\nDigite quantos movimentos quer que o Bispo faca: ");
    scanf("%d", &contadorbispomax);

    // Informa início da movimentação do Bispo
    printf("\n**Movimentacao do bispo**\n");

    // Estrutura for para simular o movimento do Bispo na diagonal "Cima, Direita"
    for(int contadorbispo = 1;contadorbispo<=contadorbispomax;contadorbispo++){

        // Imprime o número do movimento e a direção "Cima, Direita"
        printf("\nMovimentacao %d - Cima, Direita", contadorbispo);
    }

    // Finaliza o programa
    return 0;
}