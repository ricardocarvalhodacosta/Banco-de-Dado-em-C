#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Menu da Base de Dados com opções de adicionar e leitura de dados;
void menu() {

    int i;
    scanf("%i", &i);

    FILE *arquivo;

        if (i==1) //Adiiciona um cliente, armazenando o nome sobrenome, email e telefone em um arquivo txt;
        {
            char nome[50];
            char sobrenome[50];
            char email[200];
            char telefone[30];

            printf("Digite o primeiro nome do cliente: \n");
            scanf("%s", nome);
            printf("Digite o sobrenome do cliente (apenas um, nao utilize espaço): \n");
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
                printf("Nao foi possivel abrir o arquivo!\n\n"); //Caso não seja possivel abrir o arquivo por algum erro, essa mensagem irá aparecer e encerar o programa;
                system("PAUSE");
                exit(1);
            } else {
                printf("\n\nDados salvados com sucesso!\n\n"); //Caso contrário, o programa retorna que os dados foram salvos com exito;
            }

            fclose(arquivo);
        }
        else
        {
            char leitura;

            arquivo = fopen ("bancoC.txt", "r");
            if (arquivo == NULL)
            {
                printf("Nao foi possivel abrir o arquivo!\n\n"); //Mensagem de erro;
                system("PAUSE");
            } else {
                printf("\n\nLendo os dados... Os dados coletados ate agora sao: \n\n"); //Mensagem de que o programa está lendo os dados já salvos;
            }

            do
            {
                leitura = fgetc(arquivo);
                printf("%c", leitura); //Impreme na tela os dados dos clientes já coletados;

            } while (leitura != EOF);

        fclose(arquivo);

    }

}
//Uma tela mais amigável com as opções propostas pelo programa;
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
    printf("._________________________________________.\n");
    printf("|                                         |\n");
    printf("|        Ola, eu sou o bancoC.txt!        |\n");
    printf("|      No que eu posso ser util hoje?     |\n");
    printf("|                                         |\n");
    printf("|      ESCOLHA UMA DAS OPCOES ABAIXO:     |\n");
    printf("|                                         |\n");
    printf("| 1. Adicionar Cliente ao Banco de Dados; |\n");
    printf("|      2. Verificar o Banco de Dados;     |\n");
    printf("|_________________________________________|\n");
        printf("\n\n");
}
//Mensagem de encerramento do programa;
void tchau() {
    printf("\n\n");
    printf("             .--.           .---.        .-.\n");
    printf("         .---|--|   .-.     | A |  .---. |~|    .--.\n");
    printf("      .--|===|Ch|---|_|--.__| S |--|:::| |~|-==-|==|---.\n");
    printf("      |OO|NT2|oc|===| |~~|OO| C |--|   |_|~|CATS|  |___|-.\n");
    printf("      |  |   |ah|===| |==|  | I |  |:::|=| |    |GB|---|=|\n");
    printf("      |  |   |ol|   |_|__|  | I |__|   | | |    |  |___| |\n");
    printf("      |~~|===|--|===|~|~~|OO|~~~|--|:::|=|~|----|==|---|=|\n");
    printf("      ^--^---'--^---^-^--^--^---'--^---^-^-^-==-^--^---^-'\n\n");
    printf("                   OBRIGADO E VOLTE SEMPRE!!             \n\n");
    printf("\n\n");
}
//Funções do programa, abertura, menu e execução dos comandos do programa e encerramento;
int main()
{

    abertura();
    menu();
    printf("\n\n");
    tchau();

    system("PAUSE");
    return(0);
}
