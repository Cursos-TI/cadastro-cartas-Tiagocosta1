#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparações
// Objetivo: No nível Mestre, você implementará comparações entre as cartas, utilizando operadores relacionais e manipulando grandes números com precisão.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Dados Carta 1
  char estado1, codigo1[4], nome1[50];
  unsigned long int populacao1;
  int pontos_tur1;
  float area1, pib1;
  float densidade1, pib_perc1;
  float super_poder1;

  // Dados Carta 2
  char estado2, codigo2[4], nome2[50];
  unsigned long int populacao2;
  int pontos_tur2;
  float area2, pib2;
  float densidade2, pib_perc2;
  float super_poder2;

  // Área para entrada de dados
  // Leitura de dados da carta 1
  printf("Carta 1\n");
  printf("Digite o Estado:\n");
  scanf(" %c", &estado1);
  printf("Digite o Código da Carta:\n");
  scanf(" %s", codigo1);
  printf("Digite o Nome da Cidade:\n");
  getchar();
  fgets(nome1, 50, stdin);
  printf("Digite a população:\n");
  scanf("%lu", &populacao1);
  printf("Digite a Área da cidade:\n");
  scanf("%f", &area1);
  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &pontos_tur1);

  // Leitura de dados da carta 2
  printf("\nCarta 2\n");
  printf("Digite o Estado:\n");
  scanf(" %c", &estado2);
  printf("Digite o Código da Carta:\n");
  scanf(" %s", codigo2);
  printf("Digite o Nome da Cidade:\n");
  getchar();
  fgets(nome2, 50, stdin);
  printf("Digite a população:\n");
  scanf("%lu", &populacao2);
  printf("Digite a Área da cidade:\n");
  scanf("%f", &area2);
  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &pontos_tur2);

  // Calculos Carta 1
  densidade1 = (float)populacao1 / area1;
  pib_perc1 = (pib1 * 1000000000) / (float)populacao1;
  super_poder1 = (float)populacao1 + area1 + (float)pontos_tur1 + pib1 + pib_perc1 + (1.0f / densidade1);

  // Calculos Carta 2
  densidade2 = (float)populacao2 / area2;
  pib_perc2 = (pib2 * 1000000000) / (float)populacao2;
  super_poder2 = (float)populacao2 + area2 + (float)pontos_tur2 + pib2 + pib_perc2 + (1.0f / densidade2);

  // Área para exibição dos dados da cidade
  // Exibe dados Carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s", nome1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_tur1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pib_perc1);
  printf("Super Poder: %.2f \n", super_poder1);

  // Exibe dados Carta 2
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_tur2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pib_perc2);
  printf("Super Poder: %.2f \n", super_poder2);

  // Calcular campos vencedores
  int resultado_pop = populacao1 > populacao2;
  int resultado_area = area1 > area2;
  int resultado_pib = pib1 > pib2;
  int resultado_pontos = pontos_tur1 > pontos_tur2;
  int resultado_densidade = densidade1 < densidade2;
  int resultado_pib_perc = pib_perc1 > pib_perc2;
  int resultado_super_poder = super_poder1 > super_poder2;


  // Exibe Resultados
  printf("\n*** Comparação de Cartas ***\n");
  printf("** Resultado: Sim(1) Não(0) **\n\n");

  printf("População: Carta 1 venceu? (%d)\n", resultado_pop);
  printf("Área: Carta 1 venceu? (%d)\n", resultado_area);
  printf("PIB: Carta 1 venceu? (%d)\n", resultado_pib);
  printf("Pontos Turísticos: Carta 1 venceu? (%d)\n", resultado_pontos);
  printf("Densidade Populacional: Carta 1 venceu? (%d)\n", resultado_densidade);
  printf("PIB per Capita: Carta 1 venceu? (%d)\n", resultado_pib_perc);
  printf("Super Poder: Carta 1 venceu? (%d)\n", resultado_super_poder);

  return 0;
} 
