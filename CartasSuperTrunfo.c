#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {char estado[23];//aqui são as variaveis da primeira carta
    char codigo_da_carta[5];
    char nome_da_cidade[22];
    int populacao;
    float Area ;
    float pib;
    int numeros_de_pontos_turisticos;

    printf("Digite o nome do estado:\n");//Aqui e onde o usuario vai escrever as cartas
    scanf("%s", &estado);

    printf("digite o codigo da carta:\n");
    scanf("%s", &codigo_da_carta);

    printf("digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade);

    printf("digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("digite a área:\n");
    scanf("%f", &Area);

    printf("digite o pib:\n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d", &numeros_de_pontos_turisticos);

    printf("O nome do estado=:%s\n - Codigo da carta:%s\n - Nome da cidade:%s\n", estado,codigo_da_carta,nome_da_cidade);
    printf("Numero da população:%d\n - Tamanho total da área:%f\n - pib:%f\n -numero de pontos turisticos é:%d", populacao,Area,pib,numeros_de_pontos_turisticos);

    printf("Digite o nome do estado:\n");//Aqui e a segunda carta
    scanf("%s", &estado);

    printf("digite o codigo da carta:\n");
    scanf("%s", &codigo_da_carta);

    printf("digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade);

    printf("digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("digite a área:\n");
    scanf("%f", &Area);

    printf("digite o pib:\n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d", &numeros_de_pontos_turisticos);

    printf("O nome do estado=:%s\n - Codigo da carta:%s\n - Nome da cidade:%s\n", estado,codigo_da_carta,nome_da_cidade);
    printf("Numero da população:%d\n - Tamanho total da área:%f\n - pib:%f\n -numero de pontos turisticos é:%d", populacao,Area,pib,numeros_de_pontos_turisticos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
