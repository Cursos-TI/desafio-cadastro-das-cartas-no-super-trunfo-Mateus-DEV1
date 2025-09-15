#include <stdio.h>

int main() {

char estado1 [20] = "ceara";
char codigo1 [20] = "A01";
char cidade1 [20] = "fortaleza";
int populacao1 = 2686612;
float area1 = 314.93;
float pib1 = 67000.50;
int pontos1 = 15;

char estado2 [20] = "pernambuco";
char codigo2 [20] = "A02";
char cidade2 [20] = "recife";
int populacao2 = 1653461;
float area2 = 218.44;
float pib2 = 88000.75;
int pontos2 = 20;

printf("\n===== carta 1 =====\n");
printf("estado: %s\n", estado1);
printf("codigo: %s\n", codigo1);
printf("cidade:  %s\n", cidade1);
printf("populacao: %d\n", populacao1);
printf("area: %.2f\n", area1);
printf("pib: %.2f\n", pib1);
printf("pontos turistico: %d\n", pontos1);

printf("\n==== carta 2 =====\n");
printf("estado: %s\n", estado2);
printf("codigo: %s\n", codigo2);
printf("cidade: %s\n", cidade2);
printf("populacao: %d", populacao2);
printf("area: %.2f\n", area2);
printf("pib: %.2f\n", pib2);
printf("pontos turisticos: %d\n", pontos2);

return 0;

}