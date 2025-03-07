#include <stdio.h>

// definir as variáveis 

int main (){
  
  int populacaoA;
  int PopulacaoB;
  float areaA;
  float AreaB;
  float pibA;
  float PibB;
  int pontosTuristicosA;
  int PontosTuristicosB;
  
  //interação com o usuário
  
  
  printf("População do estado A\n");
  scanf(" %d", &populacaoA);
  
  printf("População do estado B\n");
  scanf("%d", &PopulacaoB);
  
  printf("Area do estado A\n");
  scanf("%f", &areaA);
  
  printf("Area do estado B\n");
  scanf("%f", &AreaB);
  
  printf("PIB do estado A\n");
  scanf("%f", &pibA);
  
  printf("PIB do estado B\n");
  scanf("%f", &PibB);
  
  printf("Pontos turísticos do estado A\n");
  scanf("%d", &pontosTuristicosA);
  
  printf("Pontos turísticos do estado B\n");
  scanf("%d", &PontosTuristicosB);
  
  //comparação entre as cidades
  
  printf("----------ESTADO A----------\n");
  
  printf("População do estado A: %d\n", populacaoA);
  printf("Area do estado A: %f\n", areaA);
  printf("PIB do estado A: %f\n", pibA );
  printf("Pontos turísticos do estado A: %d\n", pontosTuristicosA);
 
  printf("----------ESTADO B----------\n");
  
  printf("População do estado: %d\n", PopulacaoB);
  printf("Area do estado: %f\n", AreaB);
  printf("PIB do estado: %f\n", PibB );
  printf("Pontos turísticos do estado: %d\n", PontosTuristicosB);
  
  return 0;
}
