#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("***Desafio Lógico Super Trunfo - Mestre***\n");

    // Definição das variáveis
    char estado1, estado2; 
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2; 
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;
    int escolha1, escolha2; // As duas escolhas de atributo
    
    // Variáveis auxiliares para comparação e exibição
    float val1_carta1, val2_carta1;
    float val1_carta2, val2_carta2;
    char *nome_att1, *nome_att2;
    int pontos_carta1 = 0;
    int pontos_carta2 = 0;
    char *vencedor_att1, *vencedor_att2;

    // --- ENTRADA DE DADOS (Baseado no arquivo original) ---

    // Leitura dos dados da Carta 01
    printf("\n--- Dados da Carta 01 ---\n");
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado1); 
    printf("Digite o código (Ex.: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade1);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);
    printf("Digite o valor da área em km²: ");
    scanf("%f", &area1);
    printf("O valor do PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &ponto1);

    // Leitura dos dados da Carta 02
    printf("\n--- Dados da Carta 02 ---\n");
    printf("Digite uma letra de A a H (Diferente da Carta 01): ");
    scanf(" %c", &estado2); 
    printf("Digite o código: ");
    scanf("%s", codigo2);
    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade2);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);
    printf("Digite o valor da área em km²: ");
    scanf("%f", &area2);
    printf("O valor do PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &ponto2);

    // Cálculo das variáveis derivadas
    float densidadepop1 = (float)populacao1 / area1;
    float pibcap1 = (float)pib1 / populacao1;
    
    float densidadepop2 = (float)populacao2 / area2;
    float pibcap2 = (float)pib2 / populacao2;

    // --- ESCOLHA DO 1º ATRIBUTO COM SWITCH ---
    
    printf("\n### Escolha do 1º Atributo de Comparação ###\n");
    printf("Escolha o atributo (1 a 6):\n");
    printf("1. População \n"); 
    printf("2. Área \n");
    printf("3. PIB \n"); 
    printf("4. Pontos Turísticos \n"); 
    printf("5. Densidade Demográfica\n"); 
    printf("6. PIB per capita\n");
    printf("Sua 1ª escolha: ");
    scanf("%d", &escolha1);
    
    // --- ATRIBUIÇÃO DE VALORES E NOMES (1º ATRIBUTO) ---
    switch (escolha1) {
        case 1: nome_att1 = "População"; val1_carta1 = (float)populacao1; val1_carta2 = (float)populacao2; 
        break;
        case 2: nome_att1 = "Área"; val1_carta1 = area1; val1_carta2 = area2; 
        break;
        case 3: nome_att1 = "PIB"; val1_carta1 = pib1; val1_carta2 = pib2; 
        break;
        case 4: nome_att1 = "Pontos Turísticos"; val1_carta1 = (float)ponto1; val1_carta2 = (float)ponto2;
        break;
        case 5: nome_att1 = "Densidade Demográfica (INVERTIDA)"; val1_carta1 = densidadepop1; val1_carta2 = densidadepop2; 
        break;
        case 6: nome_att1 = "PIB per capita"; val1_carta1 = pibcap1; val1_carta2 = pibcap2; 
        break;
        default: nome_att1 = "INVÁLIDO"; val1_carta1 = 0; val1_carta2 = 0; 
        break;
    }
    
    // Simples validação de erro na primeira escolha
    if (escolha1 < 1 || escolha1 > 6) {
        printf("Primeira opção inválida. Por favor, reinicie o programa.\n");
        return 1;
    }

    // --- ESCOLHA DO 2º ATRIBUTO COM MENU DINÂMICO (USANDO SWITCH) ---
    
    printf("\n### Escolha do 2º Atributo de Comparação ###\n");
    printf("1º Escolhido: %s. Escolha um DIFERENTE (1 a 6):\n", nome_att1);

    // A chave para o "menu dinâmico" sem repetição é ajustar o 'case'
    // Apenas os atributos não escolhidos na 1ª opção serão impressos.
    
    switch (escolha1) {
        case 1: printf("2. Área\n 3. PIB\n 4. Pontos Turísticos\n 5. Densidade Demográfica\n 6. PIB per capita\n"); 
        break;
        case 2: printf("1. População\n 3. PIB\n 4. Pontos Turísticos\n 5. Densidade Demográfica\n 6. PIB per capita\n");
        break;
        case 3: printf("1. População\n 2. Área\n 4. Pontos Turísticos\n 5. Densidade Demográfica\n 6. PIB per capita\n"); 
        break;
        case 4: printf("1. População\n 2. Área\n 3. PIB\n 5. Densidade Demográfica\n 6. PIB per capita\n"); 
        break;
        case 5: printf("1. População\n 2. Área\n 3. PIB\n 4. Pontos Turísticos\n 6. PIB per capita\n"); 
        break;
        case 6: printf("1. População\n 2. Área\n 3. PIB\n 4. Pontos Turísticos\n 5. Densidade Demográfica\n"); 
        break;
    }
    
    printf("Sua 2ª escolha: ");
    scanf("%d", &escolha2);

    // --- ATRIBUIÇÃO DE VALORES E NOMES (2º ATRIBUTO) ---
    switch (escolha2) {
        case 1: nome_att2 = "População"; val2_carta1 = (float)populacao1; val2_carta2 = (float)populacao2; 
        break;
        case 2: nome_att2 = "Área"; val2_carta1 = area1; val2_carta2 = area2; 
        break;
        case 3: nome_att2 = "PIB"; val2_carta1 = pib1; val2_carta2 = pib2; 
        break;
        case 4: nome_att2 = "Pontos Turísticos"; val2_carta1 = (float)ponto1; val2_carta2 = (float)ponto2; 
        break;
        case 5: nome_att2 = "Densidade Demográfica (INVERTIDA)"; val2_carta1 = densidadepop1; val2_carta2 = densidadepop2; 
        break;
        case 6: nome_att2 = "PIB per capita"; val2_carta1 = pibcap1; val2_carta2 = pibcap2; 
        break;
        default: nome_att2 = "INVÁLIDO"; val2_carta1 = 0; val2_carta2 = 0; 
        break;
    }
    
    // Validação de erro na segunda escolha
    if (escolha2 < 1 || escolha2 > 6 || escolha1 == escolha2) {
        printf("\nSegunda opção inválida ou repetida. Por favor, reinicie o programa.\n");
        return 1;
    }


    printf("\n--- RESULTADO DA RODADA ---\n");
    printf("Cidades: %s (Carta 1) vs %s (Carta 2)\n", cidade1, cidade2);

    // --- 1ª COMPARAÇÃO COM OPERADOR TERNÁRIO (SWITCH PARA REGRAS) ---
    
    printf("\n1. Atributo: %s\n", nome_att1);
    printf("   %s: %.2f | %s: %.2f\n", cidade1, val1_carta1, cidade2, val1_carta2);

    switch (escolha1) {
        case 5: // Regra Invertida (Vence o menor valor: C1 < C2)
            // Ternário: Se C1 for menor, C1 vence e ganha 1 ponto, senão C2 vence e ganha 0 pontos.
            pontos_carta1 += (val1_carta1 < val1_carta2);
            pontos_carta2 += (val1_carta2 < val1_carta1);
            vencedor_att1 = (val1_carta1 == val1_carta2) ? "Empate" : (val1_carta1 < val1_carta2 ? cidade1 : cidade2);
            printf("   Vencedor: %s (Regra Invertida)\n", vencedor_att1);
            break;
            
        default: // Regra Normal (Vence o maior valor: C1 > C2)
            // Ternário: Se C1 for maior, C1 vence e ganha 1 ponto, senão C2 vence e ganha 0 pontos.
            pontos_carta1 += (val1_carta1 > val1_carta2);
            pontos_carta2 += (val1_carta2 > val1_carta1);
            vencedor_att1 = (val1_carta1 == val1_carta2) ? "Empate" : (val1_carta1 > val1_carta2 ? cidade1 : cidade2);
            printf("   Vencedor: %s\n", vencedor_att1);
            break;
    }


    // --- 2ª COMPARAÇÃO COM OPERADOR TERNÁRIO (SWITCH PARA REGRAS) ---
    
    printf("\n2. Atributo: %s\n", nome_att2);
    printf("   %s: %.2f | %s: %.2f\n", cidade1, val2_carta1, cidade2, val2_carta2);

    switch (escolha2) {
        case 5: // Regra Invertida
            // Pontuação: A expressão (val < val) retorna 1 (true) ou 0 (false), somando o ponto diretamente.
            pontos_carta1 += (val2_carta1 < val2_carta2);
            pontos_carta2 += (val2_carta2 < val2_carta1);
            vencedor_att2 = (val2_carta1 == val2_carta2) ? "Empate" : (val2_carta1 < val2_carta2 ? cidade1 : cidade2);
            printf("   Vencedor: %s (Regra Invertida)\n", vencedor_att2);
            break;
            
        default: // Regra Normal
            pontos_carta1 += (val2_carta1 > val2_carta2);
            pontos_carta2 += (val2_carta2 > val2_carta1);
            vencedor_att2 = (val2_carta1 == val2_carta2) ? "Empate" : (val2_carta1 > val2_carta2 ? cidade1 : cidade2);
            printf("   Vencedor: %s\n", vencedor_att2);
            break;
    }

    printf("----------------------------\n");

    // --- RESULTADO FINAL (Soma dos Atributos - Pontuação) ---
    
    printf("--- PONTUAÇÃO FINAL (Soma das vitórias por atributo) ---\n");
    printf("Pontos %s (Carta 1): %d\n", cidade1, pontos_carta1);
    printf("Pontos %s (Carta 2): %d\n", cidade2, pontos_carta2);

    // Operador ternário para o resultado final
    char *resultado_final = (pontos_carta1 > pontos_carta2) ? "VITÓRIA! A Carta 01 VENCEU" : 
                           (pontos_carta1 < pontos_carta2) ? "VITÓRIA! A Carta 02 VENCEU" : 
                           "EMPATE! A rodada terminou empatada \n";

    printf("\n*** %s A RODADA! ***\n", resultado_final);
    printf("\n***Desafio lógico (Mestre) concluido com sucesso!***\n");

    return 0;
}