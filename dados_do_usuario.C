#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file;
    char nome[20], c;

    printf("Nome: ");
    gets(nome);

    file = fopen("%s" "r", nome);

    if (file == NULL)
    {
        printf("Nao foi possivel abrir o arquivo.\n");
        getchar();
        exit(0);
    }

    char frase[100];

    while (fgets(frase, 100, file) != NULL)
    {
        printf("%s", frase);
    }
    
    fclose(file);

    printf("\n");
    system("pause");
    return(0);
}
