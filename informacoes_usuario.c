#include <stdio.h>
//Kauã César Ramos de Oliveira
int main() {
    char nome[50];
    int idade;
    float altura;

    // Coleta dos dados
    printf("Qual o seu nome? ");
    scanf("%s", nome);

    printf("Quantos anos você tem? ");
    scanf("%d", &idade);

    printf("Qual a sua altura? ");
    scanf("%f", &altura);

    // Exibe os dados
    printf("Seu nome é %s, você tem %d anos e tem %.2f de altura.\n", nome, idade, altura);

    return 0;
}
