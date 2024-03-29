/*Num determinado Estado, para transfer�ncias de ve�culos o DETRAN cobra uma taxa de 1% para carros fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990,
taxa esta que incide sobre o pre�o do carro. Elabore um algoritmo que leia o ano e o pre�o do carro, calcule e escreva o imposto a ser pago. *\

/*
Entrada:
Leia ano e pre�o de um carro

Processamento:
calcular o valor que � aplicado no carro devido ao imposto
informa��es importante: antes de 1990 a taxa � de 1990, j� para os fabricados em 1990 ou apos a taxa � de 1.5(if/else)

Sa�da:
mostrar o quanto de imposto deve ser pago
mostrar o valor total do custo do carro juntamente com o imposto
*/

#include<iostream>

using namespace std;

int main() {
	int ano;
	float preco;

	cout<<"\nqual o ano de fabrica, do seu carro: \n";
	cin >> ano;

	cout<<"\nDigite, quanto custou o seu carro: \n";
	cin >> preco;

	if(ano<1990) {
		preco = preco + (preco*0.01);
		cout<<"\nesse eh o valor a ser pago incluindo a taxa do DETRAN para carros antigos: \n" <<preco;
	} else {
		if(ano>=1990) {
			preco = preco + (preco*1.5);
			cout<<"\nesse eh o valor a ser pago incluindo a taxa do DETRAN para carros atuais: \n" <<preco;
		}
	}
}
