#include <stdio.h>

int main() {

  //Cartas estáticas

  //char estadoA = 'A';
  //char codigoA[4] = "A01";
  char cidadeA[50] = "Sao Paulo";
  int populacaoA = 12300000;
  float areaA = 1521.11;
  float pibA = 828.9;
  int turismoA = 50;
  float densidadeA = (float)populacaoA / areaA;

  //char estadoB = 'B';
  //char codigoB[4] = "B01";
  char cidadeB[50] = "Rio de Janeiro";
  int populacaoB = 6770000;
  float areaB = 1200.33;
  float pibB = 360.0;
  int turismoB = 30;
  float densidadeB = (float)populacaoB / areaB;

  //Variáveis suporte
  int opt1, opt2; //Armazena a escolha
  float valorA1 = 0; //Armazena primeiro atributo da cidade A
  float valorB1 = 0; //Armazena primeiro atributo da cidade B
  float valorA2 = 0; //Armazena segundo atributo da cidade A
  float valorB2 = 0; //Armazena segundo atributo da cidade B
  float somaA, somaB;

    printf("\t*** SUPER TRUNFO ***\n");

    printf("\tEscolha o primeiro atributo:\n");
    printf("\t1. Populacao\n");
    printf("\t2. Area\n");
    printf("\t3. PIB\n");
    printf("\t4. Pontos turisticos\n");
    printf("\t5. Densidade demografica\n");

    printf("Opcao: ");
    scanf("%d", &opt1);

    switch(opt1) {

        case 1:
            valorA1 = populacaoA;
            valorB1 = populacaoB;
            break;
        case 2:
            valorA1 = areaA;
            valorB1 = areaB;
            break;
        case 3:
            valorA1 = pibA;
            valorB1 = pibB;
            break;
        case 4:
            valorA1 = turismoA;
            valorB1 = turismoB;
            break;
        case 5:
            valorA1 = (1 / densidadeA) * 1000000000;
            valorB1 = (1 / densidadeB) * 1000000000;
            break;
        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }

    printf("\nEscolha o segundo atributo:\n");

    (opt1 != 1) ? printf("\t1. Populacao\n") : 0;
    (opt1 != 2) ? printf("\t2. Area\n") : 0;
    (opt1 != 3) ? printf("\t3. PIB\n") : 0;
    (opt1 != 4) ? printf("\t4. Pontos turisticos\n") : 0;
    (opt1 != 5) ? printf("\t5. Densidade demografica\n") : 0;

    printf("Opcao: ");
    scanf("%d", &opt2);

    (opt1 == opt2) ? printf("\nErro: escolha atributos diferentes!\n") : 0;

    switch(opt2) {

        case 1:
            valorA2 = populacaoA;
            valorB2 = populacaoB;
            break;
        case 2:
            valorA2 = areaA;
            valorB2 = areaB;
            break;
        case 3:
            valorA2 = pibA;
            valorB2 = pibB;
            break;
        case 4:
            valorA2 = turismoA;
            valorB2 = turismoB;
            break;
        case 5:
            valorA2 = (1 / densidadeA) * 1000000000;
            valorB2 = (1 / densidadeB) * 1000000000;
            break;
        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }

    //Soma dos atributos 1 e 2, das cidades A e B
    somaA = valorA1 + valorA2;
    somaB = valorB1 + valorB2;

    //Impressao do resultado da comparação
    printf("\t*** RESULTADO ***\n");
    printf("\tCarta 1: %s\n", cidadeA);
    printf("\tCarta 2: %s\n", cidadeB);
    printf("\nPrimeiro atributo: ");

    switch(opt1) {
        case 1: 
          printf("Populacao\n"); 
          break;
        case 2: 
          printf("Area\n"); 
          break;
        case 3: 
          printf("PIB\n"); 
          break;
        case 4: 
          printf("Pontos turisticos\n"); 
          break;
        case 5: 
          printf("Densidade demografica\n"); 
          break;
    }

    printf("Segundo atributo: ");

    switch(opt2) {
        case 1: 
          printf("Populacao\n"); 
          break;
        case 2: 
          printf("Area\n"); 
          break;
        case 3: 
          printf("PIB\n"); 
          break;
        case 4: 
          printf("Pontos turisticos\n"); 
          break;
        case 5: 
          printf("Densidade demografica\n"); 
          break;
    }
    printf("\n"); //Pulando linha por estética

    //Impressão das somas dos atributos das cidades
    printf("\t*** Soma dos atributos: ***\n");
    printf("\t%s: %.2f\n", cidadeA, somaA);
    printf("\t%s: %.2f\n", cidadeB, somaB);

    //Impressão do resultado final
    printf("\n*** Resultado final: ");

    //Lógica utilizando operador ternário para compoaração
    (somaA > somaB) ? printf("%s venceu! ***\n", cidadeA) : (somaB > somaA) ? printf("%s venceu! ***\n", cidadeB) : printf("Empate! ***\n");

    return 0;
}