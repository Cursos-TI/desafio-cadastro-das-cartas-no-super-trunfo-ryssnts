#include <stdio.h>

int main(){

char estado1;
char codigo_estado1 [5];
char nome_cidade1[40];
int populacao1, pontos_turisticos1;
float area1, pib1;

char estado2;
char codigo_estado2[5];
char nome_cidade2[40];
 int populacao2, pontos_turisticos2;
float area2, pib2;

printf("\n**CADASTRO DE CARTAS**\n\n");

printf("Olá! Vamos começar a cadastrar as suas cartas para o jogo Super Trunfo!\nPara isso, precisamos de algumas informações...\n\n");
printf("*CARTA 01*\n");
printf("Digite a primeira letra do estado: \n");
scanf(" %c", &estado1);

printf("Digite o código da carta: *Adicione a primeira letra do estado + 01, por exemplo\n");
scanf(" %s", &codigo_estado1);

printf("Digite a cidade que pertence a este estado: \n");
scanf(" %s", &nome_cidade1);

printf("Qual o número de habitantes da cidade?: \n");
scanf(" %d", &populacao1);

printf("Qual o tamanho desta cidade?: \n");
scanf(" %f", &area1);

printf("PIB da cidade: \n");
scanf(" %f", &pib1);

printf("Quantos pontos turísticos esta cidade tem?: ");
scanf(" %d", &pontos_turisticos1);

printf("\n\nAgora vamos cadastrar a sua segunda carta!\n\n");

printf("*CARTA 02*\n");
printf("Digite a primeira letra do estado: \n");
scanf(" %c", &estado2);

printf("Digite o código da carta: *Adicione a primeira letra do estado + 01, por exemplo\n");
scanf(" %s", &codigo_estado2);

printf("Digite a cidade que pertence a este estado: \n");
scanf(" %s", &nome_cidade2);

printf("Qual o número de habitantes da cidade?: \n");
scanf(" %d", &populacao2);

printf("Qual o tamanho desta cidade?: \n");
scanf(" %f", &area2);

printf("PIB da cidade: \n");
scanf(" %f", &pib2);

printf("Quantos pontos turísticos esta cidade tem?: \n");
scanf(" %d", &pontos_turisticos2);

printf("\n\n**RESULTADO**\n\n");

printf("**CARTA01**\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\n\n", estado1, codigo_estado1, nome_cidade1, populacao1,area1, pib1, pontos_turisticos1);
printf("**CARTA02**\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\n\n", estado2, codigo_estado2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2);

return 0;
}
