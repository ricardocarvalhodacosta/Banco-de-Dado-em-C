#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void menu() {

    int i;
    scanf("%i", &i);

    FILE *arquivo;

        if (i==1)
        {
            char nome[50];
            char sobrenome[50];
            char email[200];
            char telefone[30];

            printf("Digite o primeiro nome do cliente: \n");
            scanf("%s", nome);
            printf("Digite o sobrenome do cliente: \n");
            scanf("%s", sobrenome);
            printf("\nDigite o email do cliente: \n");
            scanf("%s", email);
            printf("\nDigite o telefone do cliente: \n");
            scanf("%s", telefone);

            arquivo = fopen ("bancoC.txt", "a");
            printf("Arquivo aberto com sucesso! Salvando dados...\n\n");
            fprintf(arquivo, "Nome: %s %s ", nome, sobrenome);
            fprintf(arquivo, "| E-mail: %s | Telefone: %s\n", email, telefone);

            if (arquivo == NULL)
            {
                printf("Nao foi possivel abrir o arquivo!\n\n");
                system("PAUSE");
                exit(1);
            } else {
                printf("\n\nDados salvados com sucesso!\n\n");
            }

            fclose(arquivo);
        }
        else
        {
            char leitura;

            arquivo = fopen ("bancoC.txt", "r");
            if (arquivo == NULL)
            {
                printf("Nao foi possivel abrir o arquivo!\n\n");
                system("PAUSE");
            } else {
                printf("\n\nLendo os dados... Eles sao: \n\n");
            }

            do
            {
                leitura = fgetc(arquivo);
                printf("%c", leitura);

            } while (leitura != EOF);

        fclose(arquivo);

    }

}

void abertura() {
    printf("\n\n");
    printf("         ,..........   ..........,\n");
    printf("     ,..,'          '.'          ',..,\n");
    printf("    ,' ,'            :            ', ',\n");
    printf("   ,' ,'             :             ', ',\n");
    printf("  ,' ,'              :              ', ',\n");
    printf(" ,' ,'............., : ,.............', ',\n");
    printf(",'  '............   '.'   ............'  ',\n");
    printf(" '''''''''''''''''';''';''''''''''''''''''\n");
    printf("                    '''\n");
    printf("|        Ola, eu sou o bancoC.txt!        |\n");
    printf("|      No que eu posso ser util hoje?     |\n\n");
    printf("|       ESCOLHA UM DAS OPCOES ABAIXO:     |\n\n");
    printf("| 1. Adicionar Cliente ao Banco de Dados; |\n");
    printf("|      2. Verificar o Banco de Dados;     |\n\n");
        printf("\n\n");
}

void tchau() {
    printf("\n\n");
printf("             .--.           .---.        .-.\n");
printf("         .---|--|   .-.     | A |  .---. |~|    .--.\n");
printf("      .--|===|Ch|---|_|--.__| S |--|:::| |~|-==-|==|---.\n");
printf("      |OO|NT2|oc|===| |~~|OO| C |--|   |_|~|CATS|  |___|-.\n");
printf("      |  |   |ah|===| |==|  | I |  |:::|=| |    |GB|---|=|\n");
printf("      |  |   |ol|   |_|__|  | I |__|   | | |    |  |___| |\n");
printf("      |~~|===|--|===|~|~~|OO|~~~|--|:::|=|~|----|==|---|=|\n");
printf("hjw   ^--^---'--^---^-^--^--^---'--^---^-^-^-==-^--^---^-'\n\n");
printf("                    OBRIGADO E VOLTE SEMPRE!!             \n\n");
    printf("\n\n");
}

int main()
{

    abertura();
    menu();
    printf("\n\n");
    tchau();
    
    system("PAUSE");
    return(0);
}
