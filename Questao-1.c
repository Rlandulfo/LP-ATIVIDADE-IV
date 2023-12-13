#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contato_pessoas
{
    char nome[299];
    char numero[299];
    char email[299];
};

void contatoL(struct contato_pessoas *aluno, char contatoExistente[])
{
    int i;
    for (i = 0; i < 2; i++)
    {
        if (strcmp(aluno[i].nome, contatoExistente) == 0)
        {
            printf("Nome: %s \n", aluno[i].nome);
            printf("Telefone: %s \n", aluno[i].numero);
            return;
        }
     
    }printf("Contato não encontrado! \n");
}

int main()
{
    struct contato_pessoas aluno[2];
    int i;
    char contatoExistente[299];

    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do °%d contato: ", i + 1);
        gets(aluno[i].nome);

        printf("Digite o numero do °%d contato: ", i + 1);
        gets(aluno[i].numero);

        printf("Digite o email do °%d contato: ", i + 1);
        gets(aluno[i].email);
    }
    system("cls");

    printf("Digite o nome de um contato existente: ");
    gets(contatoExistente);

    system("cls");

    contatoL(aluno, contatoExistente);

    return 0;
}
