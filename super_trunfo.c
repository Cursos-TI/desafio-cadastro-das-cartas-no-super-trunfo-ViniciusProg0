#include <stdio.h>

int main (){
    
    char estado;    
    char codigo;
    char cidade;
    int população;
    float area;
    float pib;
    int pontos_turistico;

     printf("Digite o nome do estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo);

    // Coloque dentro do printf oque deseja que seja repassado para o exeterior após processar os codigos //
// scanf o tipo de informação que eu espero que o usuario repasse, e a frente coloca em qual variavel deve ser armazenada//
printf("Digite o nome da cidade: \n");
scanf("%s", &cidade);

printf("Digite o numero da populacao: \n");
scanf("%d",&população);

printf("Adicione o tamanho da área: \n");
scanf("%f",&area);

printf("Adicione o pib: \n");
scanf("%f", &pib);

printf("Adicione a quantidade dos pontos turisticos: \n");
scanf("%d",&pontos_turistico);

//A forma que o sistema vai repassar assim que o usuario inserir os dados//
printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", população);
printf("Area: %f\n", area);
printf("Pib: %f\n", pib);
printf("Numeros de pontos turisticos: %d\n",pontos_turistico);


return 0;




}


