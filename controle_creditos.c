#include <stdio.h>

int main() {
    // Kauã César Ramos de OLiveira
   int ficha_inicial=25, ficha_pos, quantidade_partida;
   
   printf("Você tem 20 fichas\n");
   printf("Você recebeu mais 5 fichas (+5)\nVocê tem 25 fichas.\n");
   printf("Quantas partidas você jogou(cada partida são 4 fichas): ");
   scanf("%d", &quantidade_partida);
   ficha_pos=ficha_inicial-(quantidade_partida*4);
   printf("Seu total de fichas agora é: %d", ficha_pos);
   return  0;
}
