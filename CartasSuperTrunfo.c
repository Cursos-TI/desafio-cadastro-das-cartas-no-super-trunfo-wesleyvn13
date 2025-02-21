#include <stdio.h>
 //Este codigo é para o desafio Novato. O desafio sugere o cadastramento de duas cartas, sem usar estruturas de repetição e estruturas de descisão.
 // ******* OBS: A cidade é mostrada logo após ser cadastrada.*******
int main() {
    // Declaração das variaveis para guardar os dados das cidades.
    char estado; // Armazena um único caractere ex "A".
    char estado2; // Armazena um único caractere ex "B".
    char codigo_da_carta[5]; // Armazena o codigo da carta ex "A01".
    char codigo_da_carta2[5]; // Armazena o codigo da 2ª carta ex "B01".
    char nomeCidade[15]; // Armazena o nome da cidade.
    char nomeCidade2[15]; // Armazena o nome da 2ª cidade.
    int populacao; // Armazena o numero da população.
    float area; // Armazena a area da cidade.
    float pib; // Armazena o PIB.
    int numero_de_pontos_turisticos; // Armazena a quantidade de P.turisticos da cidade.

    //Captura dos dados do usuario.

     printf("\n=== Cadastre a Cidade ===\n");

     printf("\nDigite o Estado: EX: A, B, C... H \n");  
     scanf("%c", &estado);
     printf("Digite o Codigo da Carta: EX: Estado01\n");
     scanf("%s", codigo_da_carta);
     printf("Nome da cidade: \n");
     scanf(" %[^\n]", nomeCidade); // Captura o nome da cidade permitindo espaços ex: "Sao Paulo".
     printf("Digite a populacao: \n");
     scanf("%d", &populacao);
     printf("Area da Cidade: \n");
     scanf("%f", &area);
     printf("PIB:\n");
     scanf("%f", &pib);
     printf("Numero de Pontos Turisticos:\n");
     scanf("%d", &numero_de_pontos_turisticos);

     printf("\n=== Cidade Cadastrada ===\n");

     printf("Nome do Estado: %c\n", estado); // Exibe o Estado.
     printf("Codigo da Carta: %s\n", codigo_da_carta); // Exibe o codigo da Carta.
     printf("Nome da Cidade: %s\n", nomeCidade); // Exibe o nome da cidade cadastrada.
     printf("Numero da Populacao: %d\n", populacao); // mostra a população da cidade.
     printf("Tamanho da area: %f km²\n", area); // Exibe a area da cidade.
     printf("PIB da Cidade: R$ %f milhoes\n", pib); // Exibe o PIB.
     printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos); // Exibe a quantidade de pontos turisticos.

     printf("\n=== Cadastre a Cidade ===\n");

    //Captura dos dados do usuario para a segunda Cidade.

     printf("\nDigite o Estado: EX: A, B, C... H \n");  
     scanf(" %c", &estado2);
     printf("Digite o Codigo da Carta: EX: Estado01\n");
     scanf("%s", codigo_da_carta2);
     printf("Nome da cidade: \n");
     scanf(" %[^\n]", nomeCidade2); // Captura o nome da cidade permitindo espaços ex: "Sao Paulo".
     printf("Digite a populacao: \n");
     scanf("%d", &populacao);
     printf("Area da Cidade: \n");
     scanf("%f", &area);
     printf("PIB:\n");
     scanf("%f", &pib);
     printf("Numero de Pontos Turisticos:\n");
     scanf("%d", &numero_de_pontos_turisticos);

     printf("\n=== Cidade Cadastrada ===\n");

     printf("Nome do Estado: %c\n", estado2); // Exibe o Estado.
     printf("Codigo da Carta: %s\n", codigo_da_carta2); // Exibe o codigo da Carta.
     printf("Nome da Cidade: %s\n", nomeCidade2); // Exibe o nome da cidade cadastrada.
     printf("Numero da Populacao: %d\n", populacao); // mostra a população da cidade.
     printf("Tamanho da area: %f km²\n", area); // Exibe a area da cidade.
     printf("PIB da Cidade: R$ %f milhoes\n", pib); // Exibe o PIB.
     printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos); // Exibe a quantidade de pontos turisticos.
     printf("\n");
     printf("\n");
    return 0; // Indica que o programa foi executado com sucesso.
}
