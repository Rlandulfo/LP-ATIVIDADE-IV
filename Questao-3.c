#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct loja
{
    char nome [250];
    double preco;
    int estoque;
    int tiraEstoque;

};

void menu(){

    printf("1 - Realizar uma compra \n");
    printf("2 - Consultar Estoque \n");
    printf("3 - Sair do progama \n");
}

void compra(struct loja produto){

    printf("Nome do Produto : %s \n", produto.nome);
    printf("Preco do produto : %1.lf \n", produto.preco);
    printf("\n");
    
}

void mostrarEstoque(struct loja produto){

    if (produto.estoque = 0){
                printf("Produto Indisponivel");
                return;
         }
    else 
         {
                printf("Estoque Disponivel: %d \n", produto.estoque);
         }

}

void encerrarProgama(){
        printf("Obrigado por comprar conosco! \n");
}




int main(){

    int codigo;
    

    struct loja produto;


    printf("Qual o nome de seu produto? \n");
    gets(produto.nome);

    printf("Qual o preco de seu produto? \n");
    scanf("%lf", &produto.preco);

    printf("Qual o estoque de seu produto? \n");
    scanf("%d", &produto.estoque);


    do
    {
        menu();
        scanf("%d", &codigo);

        if (codigo == 1){
            compra(produto);
                printf("Qual a quantidade que será comprada? \n");
                scanf("%d", &produto.tiraEstoque);

                printf("Preco a ser pago: %1.lf \n", produto.tiraEstoque*produto.preco);

                produto.estoque -= produto.tiraEstoque;

                system("cls");

        }

        if (codigo == 2){
        mostrarEstoque(produto);
            

        }

        if (codigo == 3){
            encerrarProgama();
        }

        
    } while (codigo != 3);
    
}

