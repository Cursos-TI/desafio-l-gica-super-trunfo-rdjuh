#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Definição das variáveis para armazenar as propriedades das cidades
    char estadoA; //Variável de Estado, cidade A
    char codigoA[4]; //Variável de código, cidade A
    char cidadeA[50]; //Variável de nome da cidade A
    int populaA, turismoA; //Variáveis de população e pontos turísticos, cidade A
    float areaA, pibA, densiA, pibperA, superA; //Variáveis de área, desidade populacional, PIB, PIB per capita e super poder da cidade A
 
    char estadoB; //Variável de Estado, cidade B
    char codigoB[4]; //Variável de código, cidade B
    char cidadeB[50]; //Variável de nome da cidade B
    int populaB, turismoB; //Variáveis de população e pontos turísticos, cidade B
    float areaB, pibB, densiB, pibperB, superB; //Variáveis de área e PIB, desidade populacional, PIB per capita e super poder da cidade B
    
// Cadastro das Cartas:
    printf("Para a carta A:\n"); //Cadastro das informações, carta A
    printf("Entre com o estado, de A a H:\n");
    scanf(" %c", &estadoA);
    printf("Entre com o codigo da carta (ex.: A01):\n");
    scanf("%s", codigoA);
    printf("Entre com o nome da cidade:\n");
    scanf(" %[^\n]", cidadeA);
    printf("Entre com a populacao:\n");
    scanf("%d", &populaA);
    printf("Entre com a area (em km quadrados):\n");
    scanf("%f", &areaA);
    printf("Entre com o PIB da cidade:\n");
    scanf("%f", &pibA);
    printf("Entre com o numero de pontos turisticos:\n");
    scanf("%d", &turismoA);

    printf("Para a carta B:\n"); //Cadastro das informações, carta B
    printf("Entre com o estado, de A a H:\n");
    scanf(" %c", &estadoB);
    printf("Entre com o codigo da carta (ex.: A01):\n");
    scanf("%s", codigoB);
    printf("Entre com o nome da cidade:\n");
    scanf(" %[^\n]", cidadeB);
    printf("Entre com a populacao:\n");
    scanf("%d", &populaB);
    printf("Entre com a area (em km quadrados):\n");
    scanf("%f", &areaB);
    printf("Entre com o PIB da cidade:\n");
    scanf("%f", &pibB);
    printf("Entre com o numero de pontos turisticos:\n");
    scanf("%d", &turismoB);

//Cálculo de densidade populacional
    densiA = populaA/areaA;
    densiB = populaB/areaB;

//Cálculo de pib per capita
    pibperA = (pibA*1000000000)/populaA;
    pibperB = (pibB*1000000000)/populaB;

//Cálculo de super poder
    superA = (float)populaA + areaA + (pibA*1000000000) + (float)turismoA + pibperA + (1/densiA);
    superB = (float)populaB + areaB + (pibB*1000000000) + (float)turismoB + pibperB + (1/densiB);

//Comparação e impressão em tela dos atributos
    printf("\n***Comparação de populacao:\n");
    printf("Carta 1 - São Paulo (SP): %d\n", populaA);
    printf("Carta 2 - Rio de Janeiro (RJ): %d\n", populaB);
    printf("Resultado:");
    if(populaA>populaB){
      printf("Carta 1 (São Paulo) venceu!\n");
    }else{
      printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }

    return 0;
}
