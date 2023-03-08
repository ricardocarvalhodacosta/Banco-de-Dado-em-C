#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE *arquivo;
    char cliente;
    char emailcliente;
    char telefonecliente;
    int menu;

    printf("Bem-vindo ao banco de dados em C;\n");
    printf("O que voce gostaria de fazer?\n");
    printf("1. Adicionar um novo usuario;\n");
    printf("2. Verificar um usuario existente;\n");
    printf("3. Modificar um usuario existente;\n");
    printf("Digite o numeral correspondente: ");
    menu = getche();
    printf("\n");

    switch (menu)
    {
    case '1':
        printf("Qual o nome do cliente? \n");
        scanf("%s", cliente);
        arquivo = fopen (arquivo, "%s", cliente, "w");
        printf("E-mail do cliente: \n");
        scanf("%s", emailcliente);
        fprintf("%s", emailcliente);
        printf("Telefone cliente: \n");
        scanf("%s", telefonecliente);
        fprintf("%s", telefonecliente);
        printf("Dados coletados e armazenados com sucesso! \n\n");
        fclose(arquivo);
        break;
    case '2':
        printf("Qual o nome do cliente? \n");
        scanf("%s", cliente);
        arquivo = fopen (arquivo, "%s", cliente, "r");
        printf(arquivo, "Dados do cliente: \n\n");
        system("PAUSE");
        fclose(arquivo);
        break;
    case '3':
        printf("Qual o nome do cliente? \n");
        scanf("%s", cliente);
        arquivo = fopen (arquivo, "%s", cliente, "a");
        printf(arquivo, "Dados do cliente: \n\n");
        printf("O que gostaria de mudar: Nome, E-mail, Telefone? \n");
        printf("Digite a primeira letra do objeto: N (nome), E(e-mail), T(telefone)\n");
        menu = getche();
        switch (menu)
        {
        case 'N':
            printf("Digite o novo nome: \n");
            scanf("%s", cliente);
            fwrite(arquivo, "%s", cliente);
            fclose(arquivo);
            break;
        case 'E':
            printf("Digite o novo E-mail: \n");
            scanf("%s", emailcliente);
            fwrite(arquivo, "%s", emailcliente);
            fclose(arquivo);
            break;
        case 'N':
            printf("Digite o novo telefone: \n");
            scanf("%s", telefonecliente);
            fwrite(arquivo, "%s", telefonecliente);
            fclose(arquivo);
            break;
        default:
            break;
        }

        system("PAUSE");
        fclose(arquivo);

    default:
        break;
    }
    
    system("PAUSE");
    return(0);
}
