#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  printf("Desafio Super Trunfo - Países.\n");
  
 // Área para definição das variáveis para armazenar as propriedades das cidades
 // Carta 1
 char Estado1;
char codigo_da_carta1[0];
char nome_da_cidade1[0];
int populacao1, ponto_turistico1;
float area1, pib1;

  //carta2
  char estado2;
  char codigo_da_carta2[0];
  char nome_da_cidade2[0];
  int polulacao2, ponto_turistico2;
  float area2, pib2;
  
  // Área para entrada de dados
// Leitura - Carta 1
  printf("cadastro carta 1:\n");
  printf("Estado de A-H : ");
  scanf("%c", &estado1);
  printf("Código da carta: (ex: A01) ");
  scanf("%c", &codigo_da_carta1);
  printf("Nome da cidade: ");
  scanf("%c", &nome_da_cidade1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Ponto turístico: ");
  scanf("%d", &ponto_turistico1);
  printf(" Área (em KM²): ");
  scanf("%f", &area1);
  printf("PIB (em bilhões): ");
  scanf("%f", &pib1);
  
//Leitura - Carta 2

  printf("cadastro carta 2:\n");
  printf("Estado de A-H : ");
  scanf("%c", &estado2);
  printf("Código da carta: (ex: A02) ");
  scanf("%c", &codigo_da_carta2);
  printf("Nome da cidade: ");
  scanf("%c", &nome_da_cidade2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Ponto turístico: ");
  scanf("%d", &ponto_turistico2);
  printf(" Área (em KM²): ");
  scanf("%f", &area2);
  printf("PIB (em bilhões): ");
  scanf("%f", &pib2);
  
  

  // Área para exibição dos dados da cidade

return 0;
} 

