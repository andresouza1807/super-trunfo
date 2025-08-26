#include <stdio.h>
#include <string.h>

struct Carta
{
    char estado[3];
    char codigo[4];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};
 int main(){
    struct Carta c1, c2;
    int escolha;
    //cadastro da primeira carta
    printf("Cadastro da carta 1:\n");
    printf("Estado UF: ");
    scanf("%s", c1.estado);
    printf("Codigo da carta: ");
    scanf("%s", c1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", c1.nome);
    printf("População: ");
    scanf("%d", &c1.populacao);
    printf("Area KM2: ");
    scanf("%f", &c1.area);
    printf("PIB em bilhões: ");
    scanf("%f", &c1.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &c1.pontos_turisticos);

    //cadastro da segunda carta
    printf("\nCadastro da carta 2: ");
    printf("Estado UF: ");
    scanf("%s", c2.estado);
    printf("Codigo da carta: ");
    scanf("%s", c2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", c2.nome);
    printf("População: ");
    scanf("%d", &c2.populacao);
    printf("Area KM2: ");
    scanf("%f", &c2.area);
    printf("PIB em bilhões: ");
    scanf("%f", &c2.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &c2.pontos_turisticos);

    //escolha do atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    scanf("%d", &escolha);

    //exibiçao resumida das cartas
    printf("\n == Resultados ==\n");
    printf("Carta 1 - %s (%s): Pop %d, Area %.2f, PIB %.2f, Pontos %d\n", c1.nome, c1.estado, c1.populacao, c1.area, c1.pib, c1.pontos_turisticos);
    printf("Carta 2 - %s (%s): Pop %d, Area %.2f, PIB %.2f, Pontos %d\n", c2.nome, c2.estado, c2.populacao, c2.area, c2.pib, c2.pontos_turisticos);

    float valor1, valor2;

    //comparacao de acordo com a escolha
    switch (escolha)
    {
    case 1:
        valor1 = c1.populacao;
        valor2 = c2.populacao;
        break;
    
    case 2:
        valor1 = c1.area;
        valor2 = c2.area;    
    break;

    case 3:
        valor1 = c1.pib;
        valor2 = c2.pib;
    break;

    case 4:
        valor1 = c1.pontos_turisticos;
        valor2 = c2.pontos_turisticos;
    break;

    case 5:
        valor1 = (float)c1.populacao / c1.area;
        valor2 = (float)c2.populacao / c2.area;
        printf("\nDensidade carta 1: %.2f\n", valor1);
        printf("Densidade carta 2: %.2f\n", valor2);
        if (valor1<valor2)
            printf("Carta 1 venceu (menor densidade)!\n");
        else if (valor1 > valor2)
            printf("Carta 2 venceu (menor densidade)!\n");
        else
            printf("Empate!\n");
        return 0;

    default:
        printf("Atributo invalido!\n");
        return 0;      
        
    }

    //comparacao padrao, o maior vence.
    if (valor1 >valor2)
        printf("Carta 1 venceu!\n");
    else if (valor1 < valor2)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    return 0;
 }