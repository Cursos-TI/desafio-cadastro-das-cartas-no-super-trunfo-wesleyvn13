#include <stdio.h>
 //Este codigo é para o desafio Mestre. O desafio sugere o cadastramento de duas cartas, sem usar estruturas de repetição e estruturas de descisão, e compara-las escolhendo apenas dois atributos.
 // ******* OBS: A cidade é mostrada logo após ser cadastrada.*******
int main() {
    // Declaração das variaveis para guardar os dados das cidades.
    char estado, estado2; // Armazena um único caractere ex "A".
    char codigo_da_carta[5], codigo_da_carta2[5]; // Armazena o codigo da carta ex "A01".
    char nomeCidade[15], nomeCidade2[15]; // Armazena o nome daS cidadeS.
    int populacao, populacao2, numero_de_pontos_turisticos, numero_de_pontos_turisticos2, opcao, opcao2, pontuacao = 0, pontuacao2 = 0, resultado, resultadoFinal; // Armazena o numero da população e quantidade de pontos turisticos.
    float area, area2, pib, pib2, pibPerCapita, pibPerCapita2, densidadePopulacional, densidadePopulacional2, diferenca; // Armazena a area da cidade, pib, pib per capita e densidade populacional.


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
     
     densidadePopulacional = (float) populacao / area;
     pibPerCapita = pib / (float) populacao;

     printf("Densidade Populacional: %.2f\n", densidadePopulacional); // Calcula a densidade populacional da cidade 2
     printf("PIB per Capita: %.2f\n", pibPerCapita); // Calcula o pib per Capita da cidade 2

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
     
     densidadePopulacional2 = (float) populacao2 / area2; // Calcula a densidade populacional da cidade 2
     pibPerCapita2 = pib2 / (float) populacao2; // Calcula o pib per Capita da cidade 2

     printf("Densidade Populacional: %.2f\n", densidadePopulacional2); // Imprime a densidade populacional da cidade 2
     printf("PIB per Capita: %.2f\n", pibPerCapita2); // Imprime o pib per Capita da cidade 2
     printf("\n");
     printf("\n");

 //Menu Dinamico

// Mostra o menu para o Usuario
     printf("Escolha um indicador para comparar: \n");
     printf("1 - Populacao.\n");
     printf("2 - area.\n");
     printf("3 - PIB.\n");
     printf("4 - Pontos Turisticos.\n");
     printf("5 - Dencidade Populacional.\n");
     printf("6 - PIB PerCapita.\n");
     scanf("%d", &opcao);

// Mostra o menu sem a Opçao escolhida anteriormente pelo usuario e avaliar a escolha do usuario.

     switch (opcao) {

     case 1:
     printf("Escolha outro indicador para comparar: \n");
     printf("1 - \n");
     printf("2 - Area.\n");
     printf("3 - PIB.\n");
     printf("4 - Pontos Turisticos.\n");
     printf("5 - Densidade Populacional.\n");
     printf("6 - PIB PerCapita.\n");
     scanf("%d", &opcao2);

     resultado = populacao > populacao2 ? 1 : 0;

     if (resultado == 1 ) {
        diferenca = populacao - populacao2;
        printf("A populacao da cidade %s e de %d habitantes. A diferenca e de: %d habitantes.\n", nomeCidade , populacao, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
        pontuacao += 1;

     } else {
        diferenca = populacao2 - populacao;
        printf("A populacao da cidade %s e de %d habitantes. A diferenca e de: %d habitantes.\n", nomeCidade2 , populacao2, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
        pontuacao2 += 1;
     }

        break;
     case 2:
     printf("Escolha outro indicador para comparar: \n");
     printf("1 - Populacao.\n");
     printf("2 - \n");
     printf("3 - PIB.\n");
     printf("4 - Pontos Turisticos.\n");
     printf("5 - Densidade Populacional.\n");
     printf("6 - PIB PerCapita.\n");
     scanf("%d", &opcao2);

     resultado = area > area2 ? 1 : 0;

     if (resultado == 1 ) {
        diferenca = area - area2;
        printf("A area da cidade %s e de %f km2. A diferenca e de: %f km2.\n", nomeCidade , area, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
        pontuacao += 1;

     } else {
        diferenca = area2 - area;
        printf("A area da cidade %s e de %f km2. A diferenca e de: %f km2.\n", nomeCidade2 , area2, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
        pontuacao2 += 1;
     }

        break;
     case 3:
     printf("Escolha outro indicador para comparar: \n");
     printf("1 - Populacao.\n");
     printf("2 - Area.\n");
     printf("3 - \n");
     printf("4 - Pontos Turisticos.\n");
     printf("5 - Densidade Populacional.\n");
     printf("6 - PIB PerCapita.\n");
     scanf("%d", &opcao2);

     resultado = pib > pib2 ? 1 : 0;

     if (resultado == 1 ) {
        diferenca = pib - pib2;
        printf("O PIB de %s e de %f. A diferenca e de: %.2f milhoes.\n", nomeCidade , pib, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
        pontuacao += 1;

     } else {
        diferenca = pib2 - pib;
        printf("O PIB de %s e de %f. A diferenca e de: %.2f milhoes.\n", nomeCidade2 , pib2, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
        pontuacao2 += 1;
     }


        break;
     case 4:
     printf("Escolha outro indicador para comparar: \n");
     printf("1 - Populacao.\n");
     printf("2 - Area.\n");
     printf("3 - PIB\n");
     printf("4 - \n");
     printf("5 - Densidade Populacional.\n");
     printf("6 - PIB PerCapita.\n");
     scanf("%d", &opcao2);

     resultado = numero_de_pontos_turisticos > numero_de_pontos_turisticos2 ? 1 : 0;

     if (resultado == 1 ) {
        diferenca = numero_de_pontos_turisticos - numero_de_pontos_turisticos2;
        printf("O numero de PontosA Turisticos de  %s e de %d km2. A diferenca e de: %f km2.\n", nomeCidade , numero_de_pontos_turisticos, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
        pontuacao += 1;

     } else {
        diferenca = numero_de_pontos_turisticos2 -  numero_de_pontos_turisticos;
        printf("O numero de Pontos Turisticos de %s e de %d km2. A diferenca e de: %f km2.\n", nomeCidade2 , numero_de_pontos_turisticos2, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
        pontuacao2 += 1;
     }

        break;
    case 5:
     printf("Escolha outro indicador para comparar: \n");
     printf("1 - Populacao.\n");
     printf("2 - Area.\n");
     printf("3 - PIB\n");
     printf("4 - Pontos Turisticos\n");
     printf("5 - \n");
     printf("6 - PIB PerCapita.\n");
     scanf("%d", &opcao2);

     resultado = densidadePopulacional > densidadePopulacional2 ? 1 : 0;

     if (resultado == 1 ) {
        diferenca = densidadePopulacional - densidadePopulacional2;
        printf("A densidade Populacional %s e de %f. A diferenca e de: %f.\n", nomeCidade , densidadePopulacional, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
        pontuacao += 1;

     } else {
        diferenca = densidadePopulacional2 - densidadePopulacional;
        printf("A densidade Populacional %s e de %f. A diferenca e de: %f.\n", nomeCidade2 , densidadePopulacional2, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
        pontuacao2 += 1;
     }

        break;
    case 6:
     printf("Escolha outro indicador para comparar: \n");
     printf("1 - Populacao.\n");
     printf("2 - Area.\n");
     printf("3 - PIB\n");
     printf("4 - Pontos Turisticos.\n");
     printf("5 - Densidade Populacional.\n");
     printf("6 - \n");
     scanf("%d", &opcao2);

     resultado = pibPerCapita > pibPerCapita2 ? 1 : 0;

     if (resultado == 1 ) {
        diferenca = pibPerCapita - pibPerCapita2;
        printf("O PIB perCapita %s e de %f. A diferenca e de: %f.\n", nomeCidade , pibPerCapita, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
        pontuacao += 1;

     } else {
        diferenca = pibPerCapita2 - pibPerCapita;
        printf("O PIB perCapita %s e de %f. A diferenca e de: %f.\n", nomeCidade2 , pibPerCapita2, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
        pontuacao2 += 1;
     }

        break;
     default:
     printf("Essa Opcao nao existe.");
        break;
     }

 // Estrutura switch para avaliar a escolha do usuário

     switch (opcao2) {

     case 1:
     resultado = populacao > populacao2 ? 1 : 0;

     if (resultado == 1 ) {
        diferenca = populacao - populacao2;
        printf("A populacao da cidade %s e de %d habitantes. A diferenca e de: %d habitantes.\n", nomeCidade , populacao, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
        pontuacao += 1;

     } else {
        diferenca = populacao2 - populacao;
        printf("A populacao da cidade %s e de %d habitantes. A diferenca e de: %d habitantes.\n", nomeCidade2 , populacao2, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
        pontuacao2 += 1;
     }
        break;
    case 2:
     resultado = area > area2 ? 1 : 0;

     if (resultado == 1 ) {
        diferenca = area - area2;
        printf("A area da cidade %s e de %f km2. A diferenca e de: %f km2.\n", nomeCidade , area, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
        pontuacao += 1;

     } else {
        diferenca = area2 - area;
        printf("A area da cidade %s e de %f km2. A diferenca e de: %f km2.\n", nomeCidade2 , area2, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
        pontuacao2 += 1;
     }
     
        break;
    case 3:
    
    resultado = pib > pib2 ? 1 : 0;

     if (resultado == 1 ) {
        diferenca = pib - pib2;
        printf("A area da cidade %s e de %f . A diferenca e de: %f.\n", nomeCidade , pib, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
        pontuacao += 1;

     } else {
        diferenca = pib2 - pib;
        printf("A area da cidade %s e de %f. A diferenca e de: %f.\n", nomeCidade2 , pib2, diferenca);
        printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
        pontuacao2 += 1;
     }

        break; 
     case 4:

    resultado = numero_de_pontos_turisticos > numero_de_pontos_turisticos2 ? 1 : 0;

    if (resultado == 1 ) {
       diferenca = numero_de_pontos_turisticos - numero_de_pontos_turisticos2;
       printf("O numero de pontos turistico de %s e de %f . A diferenca e de: %f km2.\n", nomeCidade , numero_de_pontos_turisticos, diferenca);
       printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
       pontuacao += 1;

    } else {
       diferenca = numero_de_pontos_turisticos2 -  numero_de_pontos_turisticos;
       printf("O numero de pontos turistico de %s e de %f . A diferenca e de: %f km2.\n", nomeCidade2 , numero_de_pontos_turisticos2, diferenca);
       printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
       pontuacao2 += 1;
    }

        break;  
    case 5:
    

    resultado = densidadePopulacional < densidadePopulacional2 ? 1 : 0;

    if (resultado == 1 ) {
       diferenca = densidadePopulacional - densidadePopulacional2;
       printf("A densidade Populacional da cidade %s e de %f. A diferenca e de: %f.\n", nomeCidade , densidadePopulacional, diferenca);
       printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
       pontuacao += 1;

    } else {
       diferenca = densidadePopulacional2 - densidadePopulacional;
       printf("A densidade Populacional %s e de %f km2. A diferenca e de: %f km2.\n", nomeCidade2 , densidadePopulacional2, diferenca);
       printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
       pontuacao2 += 1;
    }

        break;
    case 6:
   
        resultado = pibPerCapita > pibPerCapita2 ? 1 : 0;
   
        if (resultado == 1 ) {
           diferenca = pibPerCapita - pibPerCapita2;
           printf("O PIB perCapta da cidade %s e de %f . A diferenca e de: %f.\n", nomeCidade , pibPerCapita, diferenca);
           printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta, nomeCidade);
           pontuacao += 1;
   
        } else {
           diferenca = pibPerCapita2 - pibPerCapita;
           printf("O PIB perCapta da cidade %s e de %f . A diferenca e de: %f.\n", nomeCidade2 , pibPerCapita2, diferenca);
           printf("A cidade %s - %s ganhou 1 ponto.\n ", codigo_da_carta2, nomeCidade2);
           pontuacao2 += 1;
        }
   
        break;
     default:
     printf("Essa Opcao nao existe.");
        break;
     }

// Mostra para o Usuario o resultado.

     if(pontuacao == pontuacao2 ) {
        printf("O resultado e: EMPATE!!!\n");
     } else {
        resultadoFinal = pontuacao > pontuacao2 ? 1 : 2;
        if (resultadoFinal == 1) {
            printf("A a cidade %s - %s e a Vencedora!!!. Com %d Ponto(s)\n" , codigo_da_carta, nomeCidade, pontuacao);
            printf("\n");
         } else {
            printf("A a cidade %s - %s e a Vencedora!!!. Com %d Ponto(s)\n" , codigo_da_carta2, nomeCidade2, pontuacao2);
            printf("\n");
         };
     };
     
    return 0; // Indica que o programa foi executado com sucesso.
}
