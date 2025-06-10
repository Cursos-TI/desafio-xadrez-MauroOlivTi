#include <stdio.h>

// Função recursiva para simular o movimento da Torre
void torre(int n)
{
    // Se n for maior ou igual a 1, chama recursivamente para n-1
    if (n >= 1)
    {
        torre(n - 1); // Chamada recursiva para imprimir movimentos anteriores
        printf("Movimento %d - Direita\n", n); // Imprime o movimento atual para a direita
    }
}

// Função recursiva para simular o movimento da Rainha
void rainha(int n)
{
    // Se n for maior ou igual a 1, chama recursivamente para n-1
    if (n >= 1)
    {
        rainha(n - 1); // Chamada recursiva para imprimir movimentos anteriores
        printf("Movimento %d - Esquerda\n", n); // Imprime o movimento atual para a esquerda
    }
}

// Função recursiva para simular o movimento do Bispo com loops aninhados
void bispo(int n)
{
    // Se n for maior ou igual a 1, chama recursivamente para n-1
    if (n >= 1)
    {
        bispo(n - 1); // Chamada recursiva para imprimir movimentos anteriores
        // Loop externo para a linha (vertical), mas executa apenas para a linha n
        for (int linha = n; linha <= n; linha++)
        {
            // Loop interno para a coluna (horizontal), executa apenas para a coluna n
            for (int coluna = n; coluna <= n; coluna++)
            {
                // Imprime o movimento do bispo na diagonal
                printf("Movimento %d- Cima, Direita\n", n);
            }
        }
    }
}

int main()
{

    // Declaração das variáveis de controle para cada peça
    int contadortorre = 1, contadorrainha = 1, contadortorremax, contadorrainhamax, contadorbispomax;

    // Solicita ao usuário o número de movimentos para a Torre
    printf("\nDigite quantos movimentos quer que a Torre faca: ");
    scanf("%d", &contadortorremax);

    // Informa início da movimentação da Torre
    printf("\n**Movimentacao da Torre**\n");

    // Chama a função recursiva da Torre
    torre(contadortorremax);

    // Solicita ao usuário o número de movimentos para a Rainha
    printf("\nDigite quantos movimentos quer que a Rainha faca: ");
    scanf("%d", &contadorrainhamax);

    // Informa início da movimentação da Rainha
    printf("\n**Movimentacao da rainha**\n");

    // Chama a função recursiva da Rainha
    rainha(contadorrainhamax);

    // Solicita ao usuário o número de movimentos para o Bispo
    printf("\nDigite quantos movimentos quer que o Bispo faca: ");
    scanf("%d", &contadorbispomax);

    // Informa início da movimentação do Bispo
    printf("\n**Movimentacao do bispo**\n");

    // Chama a função recursiva do Bispo
    bispo(contadorbispomax);
    //-----------------------------------------------------------------------------------
    // Movimento do cavalo
    printf("\n\n");
    printf("Movimento em L:\n\n");

    // Define o número de movimentos do cavalo e as coordenadas iniciais
    int contadorcavalomax = 5, x = 0, y = 0;

    // Loop externo para cada movimento completo do cavalo (em L)
    for (int coluna = 1; coluna <= contadorcavalomax; coluna++)
    {
        // Loop interno para simular as duas casas para cima
        for (int linha = 0; linha <= 2; linha++)
        {
            // Usa continue para pular a iteração quando linha == 0 (apenas para estudo do fluxo)
            if (linha == 0)
            {
                continue;
            }

            y++; // Incrementa a coordenada y (sobe uma casa)
            printf("Cima\n");
            printf("Cordenadas (y,x), (%d,%d)\n", y, x); // Imprime a coordenada após subir
        }
        x++; // Incrementa a coordenada x (vai uma casa para a direita)
        printf("Direita\n");
        printf("Cordenadas (y,x), (%d,%d)\n\n", y, x); // Imprime a coordenada após ir para a direita
    }

    // Finaliza o programa
    return 0;
}