#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5. Defina uma estrutura Produto com os campos codigo, descricao, quantidade e
preco_unitario. Escreva um programa que permita ao usu�rio cadastrar os dados de at� 5
produtos, armazen�-los em um vetor de estruturas e, em seguida, exibir na tela o c�digo, a
descri��o e o pre�o total de cada produto (calculado multiplicando a quantidade pelo pre�o
unit�rio).*/


struct Produtos{
	int codigos;
	char descricao[50];
	int quantidade;
	float precoUnitario;
};

void preencherProdutos(Produtos produtos[]){
	for (int i = 0; i < 5; i++){
		printf("informe o codigo do produto: ");
		scanf("%d",&produtos[i].codigos);
		fflush(stdin);
		printf("Descri�ao do produto: ");
		gets(produtos[i].descricao);
		
		printf("Quantidade: ");
		scanf("%d",&produtos[i].quantidade);
		fflush(stdin);
		printf("Pre�o unitario: ");
		scanf("%f",&produtos[i].precoUnitario);
		fflush(stdin);
		system("cls");
	}
}

void exibirProdutos(Produtos produtos[]){
	for (int i = 0; i < 5; i++){
		printf("---------------------------\n");
		printf("|Codigo: %d\n",produtos[i].codigos);
		printf("|Descri��o: %s\n",produtos[i].descricao);
		printf("|Quantidade: %d\n",produtos[i].quantidade);
		printf("|Pre�o: R$%.2f \n",produtos[i].precoUnitario);
		printf("---------------------------\n");
	}
} 
int main() {
	setlocale(LC_ALL,"");
	printf("")
	Produtos produtos[5];
	
	preencherProdutos(produtos);
	exibirProdutos(produtos);
}
