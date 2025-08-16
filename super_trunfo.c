#include <stdio.h>

int main (){
    
    char estado[50], estado2[50];    
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    int população, população2;
    double area, area2;
    double pib, pib2;
    int pontos_turistico, pontos_turistico2;

     printf("Digite o nome do estado: \n");
    scanf(" %s", estado);

    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigo);

    // Coloque dentro do printf oque deseja que seja repassado para o exeterior após processar os codigos //
// scanf o tipo de informação que eu espero que o usuario repasse, e a frente coloca em qual variavel deve ser armazenada//
printf("Digite o nome da cidade: \n");
scanf(" %49[^\n]", cidade);

printf("Digite o numero da populacao: \n");
scanf(" %d",&população);

printf("Adicione o tamanho da área: \n");
scanf(" %f",&area);

printf("Adicione o pib: \n");
scanf(" %f", &pib);

printf("Adicione a quantidade dos pontos turisticos: \n");
scanf(" %d",&pontos_turistico);

//A forma que o sistema vai repassar assim que o usuario inserir os dados//
printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", população);
printf("Area: %f\n", area);
printf("Pib: %f\n", pib);
printf("Numeros de pontos turisticos: %d\n",pontos_turistico);



printf("Digite o nome do estado 2: \n");
    scanf(" %s", estado2);

    printf("Digite o codigo da carta 2: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf(" %49[^\n]", cidade2);

    printf("Digite o numero da populacao 2: \n");
    scanf(" %d",&população2);

    printf("Adicione o tamanho da área 2: \n");
    scanf(" %f",&area2);

    printf("Adicione o pib 2: \n");
    scanf(" %f", &pib2);

    printf("Adicione a quantidade dos pontos turisticos 2: \n");
    scanf(" %d",&pontos_turistico2);

return 0;




}


