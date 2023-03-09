#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void menu() {

    int i;

    printf("Ola, eu sou bancoC.txt!\n");
    printf("No que eu posso ser util hoje?\n");
    printf("1. Adicionar Cliente; 2. Verificar um cliente;\n\n");

    scanf("%i", &i);

    FILE *arquivo;

        if (i==1)
        {
            char nome[50];
            char email[200];
            char telefone[30];

            printf("Digite o nome do cliente: \n");
            scanf("%s", nome);
            printf("\nDigite o email do cliente: \n");
            scanf("%s", email);
            printf("\nDigite o telefone do cliente: \n");
            scanf("%s", telefone);

            arquivo = fopen ("bancoC.txt", "w");
            printf("Arquivo aberto com sucesso! Salvando dados...\n\n");
            fprintf(arquivo, "Nome: %s | E-mail: %s | Telefone: %s", nome, email, telefone);

            if (arquivo == NULL)
            {
                printf("Nao foi possivel abrir o arquivo!\n\n");
                system("PAUSE");
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

int main()
{

    menu();
    printf("\n\n");
    
    system("PAUSE");
    return(0);
}
