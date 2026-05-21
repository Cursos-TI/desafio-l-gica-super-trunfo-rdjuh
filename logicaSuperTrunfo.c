#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Paises
// Tema 1 - Cadastro das cartas
// Objetivo: No nivel novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informacões.

int main() {
  /*// area para definicao das variaveis para armazenar as propriedades das cidades
  char estadoA; //Variavel de Estado, cidade A
  char codigoA[4]; //Variavel de código, cidade A
  char cidadeA[50]; //Variavel de nome da cidade A
  int populaA, turismoA; //Variaveis de populacao e pontos turisticos, cidade A
  float areaA, pibA, densiA, pibperA, superA; //Variaveis de area, desidade populacional, PIB, PIB per capita e super poder da cidade A

  char estadoB; //Variavel de Estado, cidade B
  char codigoB[4]; //Variavel de código, cidade B
  char cidadeB[50]; //Variavel de nome da cidade B
  int populaB, turismoB; //Variaveis de populacao e pontos turisticos, cidade B
  float areaB, pibB, densiB, pibperB, superB; //Variaveis de area e PIB, desidade populacional, PIB per capita e super poder da cidade B
  */

  //Cartas estáticas
  char estadoA = 'A';
  char codigoA[4] = "A01";
  char cidadeA[50] = "Sao Paulo";
  int populaA = 12300000;
  int turismoA= 50;
  float areaA = 1521.11;
  float pibA = 828.9;
  //float pibperA = (pibA*1000000000)/populaA;
  float densiA = (float)populaA/areaA;
  //float superA = (float)populaA + areaA + (pibA*1000000000) + (float)turismoA + pibperA + (1/densiA);

  char estadoB = 'B';
  char codigoB[4] = "B01";
  char cidadeB[50] = "Rio de Janeiro";
  int populaB = 6770000;
  int turismoB= 30;
  float areaB = 1200.33;
  float pibB = 360.0;
  //float pibperB = (pibB*1000000000)/populaB;
  float densiB = (float)populaB/areaB;
  //float superB = (float)populaB + areaB + (pibB*1000000000) + (float)turismoB + pibperB + (1/densiB);

  //Variavel para menu
  int opt;
  printf("\t*** MENU ***\n");
  printf("\t0. Sair\n");
  printf("\t1. Cadastrar cartas\n");
  printf("\t2. Comparar populacao\n");
  printf("\t3. Comparar area\n");
  printf("\t4. Comparar PIB\n");
  printf("\t5. Comparar numero de pontos turisticos\n");
  printf("\t6. Comparar densidade demografica\n");
  printf("\tEscolha uma opcao: ");
  scanf(" %d", &opt);
  switch(opt){

    case 0:
      printf("\n*** Saindo... ***\n");
      break;
    case 1:
      printf("\nIndisponivel no momento...\n");
      // area para entrada de dados
      /*printf("Para a carta A:\n"); //Cadastro das informacões, carta A
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
      printf("Para a carta B:\n"); //Cadastro das informacões, carta B
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
      */
      break;
    case 2:
      //Comparacao e impressao em tela do atributo populacao
      printf("\n*** Comparacao de populacao: ***\n");
      printf("\nCarta 1 - %s: %d\n", cidadeA, populaA);
      printf("\nCarta 2 - %s: %d\n", cidadeB, populaB);
      printf("\n*** Resultado: ***");
      if(populaA>populaB){
        printf("\nCarta 1 (%s) venceu!\n", cidadeA);
      }else if(populaA<populaB){
        printf("\nCarta 2 (%s) venceu!\n", cidadeB);
      }else{
        printf("\nEmpate!\n");
      };
      break;
    case 3:
      //Comparacao e impressao em tela do atributo area
      printf("\n*** Comparacao de area: ***\n");
      printf("\nCarta 1 - %s: %.2f\n", cidadeA, areaA);
      printf("\nCarta 2 - %s: %.2f\n", cidadeB, areaB);
      printf("\n*** Resultado: ***");
      if(areaA>areaB){
        printf("\nCarta 1 (%s) venceu!\n", cidadeA);
      }else if(areaA<areaB){
        printf("\nCarta 2 (%s) venceu!\n", cidadeB);
      }else{
        printf("\nEmpate!\n");
      };
      break;
    case 4:
      //Comparacao e impressao em tela do atributo PIB
      printf("\n*** Comparacao de PIB: ***\n");
      printf("\nCarta 1 - %s: %.2f\n", cidadeA, pibA);
      printf("\nCarta 2 - %s: %.2f\n", cidadeB, pibB);
      printf("\n*** Resultado: ***");
      if(pibA>pibB){
        printf("\nCarta 1 (%s) venceu!\n", cidadeA);
      }else if(pibA<pibB){
        printf("\nCarta 2 (%s) venceu!\n", cidadeB);
      }else{
        printf("\nEmpate!\n");
      };
      break;
    case 5:
      //Comparacao e impressao em tela do atributo pontos turisticos
      printf("\n*** Comparacao de pontos turisticos: ***\n");
      printf("\nCarta 1 - %s: %d\n", cidadeA, turismoA);
      printf("\nCarta 2 - %s: %d\n", cidadeB, turismoB);
      printf("\n*** Resultado: ***");
      if(turismoA>turismoB){
        printf("\nCarta 1 (%s) venceu!\n", cidadeA);
      }else if(turismoA<turismoB){
        printf("\nCarta 2 (%s) venceu!\n", cidadeB);
      }else{
        printf("\nEmpate!\n");
      };
      break;
    case 6:
      //Comparacao e impressao em tela do atributo densidade demografica
      printf("\n*** Comparacao de pontos turisticos: ***\n");
      printf("\nCarta 1 - %s: %.2f\n", cidadeA, densiA);
      printf("\nCarta 2 - %s: %.2f\n", cidadeB, densiB);
      printf("\n*** Resultado: ***");
      if(densiA<densiB){
        printf("\nCarta 1 (%s) venceu!\n", cidadeA);
      }else if(densiA>densiB){
        printf("\nCarta 2 (%s) venceu!\n", cidadeB);
      }else{
        printf("\nEmpate!\n");
      };
      break;
    default:
      printf("\nOpcao invalida!\n");
      break; 
  }
  /*
  // area para exibicao dos dados da cidade
    printf("\n*** Carta A ***\n"); //Carta A
    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigoA);
    printf("Nome da cidade: %s\n", cidadeA);
    printf("Populacao: %d pessoas\n", populaA);
    printf("Area: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Numero de pontos turisticos: %d\n", turismoA);
    printf("Densidade populacional: %.2f hab/km²\n", densiA);
    printf("PIB per Capita: %.2f reais\n", pibperA);
    printf("Super poder: %.2f\n", superA);

    printf("\n*** Carta B ***\n"); //Carta B
    printf("Estado: %c\n", estadoB);
    printf("Codigo: %s\n", codigoB);
    printf("Nome da cidade: %s\n", cidadeB);
    printf("Populacao: %d pessoas\n", populaB);
    printf("Area: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Numero de pontos turisticos: %d\n", turismoB);
    printf("Densidade populacional: %.2f hab/km²\n", densiB);
    printf("PIB per Capita: %.2f reais\n", pibperB);
    printf("Super poder: %.2f\n", superB);
  */
  
  return 0;
}