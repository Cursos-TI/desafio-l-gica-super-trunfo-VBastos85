#include <stdio.h>

int main(){

printf("***Desafio Super Trunfo - Mestre***\n");

    //1. Definir nome para as variaveis que serão utilizadas:
    char estado1, estado2; 
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    unsigned int populacao1, populacao2; 
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;

    //Aplicar os dados da primeira e segunda carta usando as funções printf e scanf (entrada e saída de dados):  
    
    printf("Primeiro vamos digitar os dados da Carta 01\n");
    
    printf("Digite uma letra de A a H: \n", estado1);
    scanf("%c", &estado1);

    printf("Digite a letra escolhida acima e acrescente um número (Ex.: A01): \n", codigo1);
    scanf("%s", codigo1);

    printf("Digite o nome de uma cidade: \n", cidade1);
    scanf("%s", cidade1);

    printf("Digite o número de habitantes dessa cidade: \n", populacao1);
    scanf("%u", &populacao1);

    printf("Digite o valor da área em km²: \n", area1);
    scanf("%f", &area1);

    printf("O valor do PIB: \n", pib1);
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: \n", ponto1);
    scanf("%d", &ponto1);

    //Partimos agora para definir os dados da Carta 02;

    printf("**Agora vamos definir os dados da Carta 02** \n");

    printf("Digite uma letra de A a H (Que seja diferente da Carta 01): \n", estado2);
    scanf(" %c", &estado2);

    printf("Digite a letra escolhida acima e acrescente um número: \n", codigo2);
    scanf("%s", codigo2);

    printf("Digite o nome de uma cidade: \n", cidade2);
    scanf("%s", cidade2);

    printf("Digite o número de habitantes dessa cidade: \n", populacao2);
    scanf("%u", &populacao2);

    printf("Digite o valor da área em km²: \n", area2);
    scanf("%f", &area2);

    printf("O valor do PIB: \n", pib2);
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: \n", ponto2);
    scanf("%d", &ponto2);

    printf("Agora vamos verificar como ficaram as informações da Carta 1 e Carta 2!\n");

    //Vamos imprimir as informação digitadas pelo usuário para a carta 1:

    printf("*Carta 01* \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", ponto1);
 
    // Desafio Avançado:
    //O valor da densidade será o valor da população da cidade dividido pela área da cidade;
    printf("Densidade Populacional: %.2f hab/km² \n", populacao1 / area1); 
    // O valor do PIB per capita será calculado com o PIB dividido pela população da cidade;
    printf("PIB per capita: R$ %.2f \n", pib1 / populacao1); 


    printf("---------------------\n");

    //E agora as informações digitadas pelo usuário para a segunda carta: 

    printf("*Carta 02* \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f hab/km² \n", populacao2 / area2); 
    printf("PIB per capita: R$ %.2f \n", pib2 / populacao2); 
 
    printf("------------------------\n");

    //Desafio Mestre: 
  
    int Carta01;
    float densidadepop1 = (float)populacao1 / area1;
    float pibcap1 = (float)pib1 / populacao1;

    int Carta02;
    float densidadepop2 = (float)populacao2 / area2;
    float pibcap2 = (float)pib2 / populacao2;

    // Calculo do "Super Poder" da Carta 1
    // Atencao: o inverso da densidade e 1.0 / densidade_populacional
    float super_poder1 = (float)populacao1 + area1 + (float)pib1 + (float)ponto1 + pibcap1 + (1.0 / densidadepop1);

    // Calculo do "Super Poder" da Carta 2
    float super_poder2 = (float)populacao2 + area2 + (float)pib2 + (float)ponto2 + pibcap2 + (1.0 / densidadepop2);

    printf("*** Super Poder ***\n\n");
    printf("Super Poder da Carta 1: %.2f\n", super_poder1);
    printf("Super Poder da Carta 2: %.2f\n", super_poder2);
    printf("----------------------------------\n\n");

    // --- Comparar cada atributo e exibir o resultado ---
    
    printf("Resultado das Comparacoes (1 = Carta 1 vence, 0 = Carta 2 vence):\n\n");

    // Comparação de População (maior valor vence)
    printf("População (maior vence): %u\n", populacao1 > populacao2);

    // Comparacao de Area (maior valor vence)
    printf("Área (maior vence): %d\n", area1 > area2);

    // Comparacao de PIB (maior valor vence)
    printf("PIB (maior vence): %d\n", pib1 > pib2);
    
    // Comparacao de Pontos Turisticos (maior valor vence)
    printf("Pontos Turisticos (maior vence): %d\n", ponto1 > ponto2);

    // Comparacao de PIB per Capita (maior valor vence)
    printf("PIB per Capita (maior vence): %d\n", pibcap1 > pibcap2);

    // Comparacao de Densidade Populacional (menor valor vence)
    // A logica aqui e invertida: usamos o operador '<' para mostrar que
    // a Carta 1 vence se o seu valor for menor que o da Carta 2.
    printf("Densidade Populacional (menor vence): %d\n", densidadepop1 < densidadepop2);

    // Comparacao de Super Poder (maior valor vence)
    printf("Super Poder (maior vence): %d\n\n", super_poder1 > super_poder2);



    printf("***Desafio Mestre concluido com sucesso!***");

    

    return 0;
}