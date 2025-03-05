#include <stdio.h>
 //Este codigo é para o desafio Novato. O desafio sugere o cadastramento de duas cartas, sem usar estruturas de repetição e estruturas de descisão.
 // ******* OBS: A cidade é mostrada logo após ser cadastrada.*******
int main() {
    // Declaração das variaveis para guardar os dados das cidades.
    char estado, estado2; // Armazena um único caractere ex "A".
    char codigo_da_carta[5], codigo_da_carta2[5]; // Armazena o codigo da carta ex "A01".
    char nomeCidade[15], nomeCidade2[15]; // Armazena o nome daS cidadeS.
    int populacao, populacao2, numero_de_pontos_turisticos, numero_de_pontos_turisticos2; // Armazena o numero da população e quantidade de pontos turisticos.
    float area, area2, pib, pib2; // Armazena a area da cidade e pib.


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
     printf("Densidade Populacional: %.2f\n", (float) populacao / area); // Calcula a densidade populacional da cidade 2
     printf("PIB per Capita: %.2f\n", pib / (float) populacao); // Calcula o pib per Capita da cidade 2

     printf("\n=== Cadastre a Cidade ===\n");

    //Captura dos dados do usuario para a segunda Cidade.

     printf("\nDigite o Estado: EX: A, B, C... H \n");  
     scanf(" %c", &estado2);
     printf("Digite o Codigo da Carta: EX: Estado01\n");
     scanf("%s", codigo_da_carta2);
     printf("Nome da cidade: \n");
     scanf(" %[^\n]", nomeCidade2); // Captura o nome da cidade permitindo espaços ex: "Sao Paulo".
     printf("Digite a populacao: \n");
     scanf("%d", &populacao2);
     printf("Area da Cidade: \n");
     scanf("%f", &area2);
     printf("PIB:\n");
     scanf("%f", &pib2);
     printf("Numero de Pontos Turisticos:\n");
     scanf("%d", &numero_de_pontos_turisticos2);

     printf("\n=== Cidade Cadastrada ===\n");

     printf("Nome do Estado: %c\n", estado2); // Exibe o Estado.
     printf("Codigo da Carta: %s\n", codigo_da_carta2); // Exibe o codigo da Carta.
     printf("Nome da Cidade: %s\n", nomeCidade2); // Exibe o nome da cidade cadastrada.
     printf("Numero da Populacao: %d\n", populacao2); // mostra a população da cidade.
     printf("Tamanho da area: %f km²\n", area2); // Exibe a area da cidade.
     printf("PIB da Cidade: R$ %f milhoes\n", pib2); // Exibe o PIB.
     printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos); // Exibe a quantidade de pontos turisticos.
     printf("Densidade Populacional: %.2f\n", (float) populacao2 / area2); // Calcula a densidade populacional da cidade 2
     printf("PIB per Capita: %.2f\n", pib2 / (float) populacao2); // Calcula o pib per Capita da cidade 2
     printf("\n");
     printf("\n");
    return 0; // Indica que o programa foi executado com sucesso.
}
