#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int nrandom = rand() % 3 + 1;
    int opcao;

    printf("---------------------Pedra, Papel e Tesoura---------------------\n");
    printf("Escolha um:\n");
    printf("[1] Pedra\n");
    printf("[2] Papel\n");
    printf("[3] Tesoura\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        if (nrandom == 1)
        {
            printf("Empate, a maquina escolheu Pedra\n");
        }
        else if (nrandom == 2)
        {
            printf("Perdeu! A maquina escolheu Papel");
        }
        else if (nrandom == 3)
        {
            printf("Ganhou! A maquina escolheu Tesoura");
        }

        break;
    case 2:
        if (nrandom == 1)
        {
            printf("Ganhou, a maquina escolheu Pedra\n");
        }
        else if (nrandom == 2)
        {
            printf("Empate! A maquina escolheu Papel\n");
        }
        else if (nrandom == 3)
        {
            printf("Perdeu! A maquina escolheu Tesoura\n");
        }
        break;
    case 3:
        if (nrandom == 1)
        {
            printf("Perdeu, a maquina escolheu Pedra\n");
        }
        else if (nrandom == 2)
        {
            printf("Ganhou! A maquina escolheu Papel\n");
        }
        else if (nrandom == 3)
        {
            printf("Empate! A maquina escolheu Tesoura\n");
        }
        break;

    default:
        printf("Opção Inválida, escolha de 1 a 3");
        break;
    }
}