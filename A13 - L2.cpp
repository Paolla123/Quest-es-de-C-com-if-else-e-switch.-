/* Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por um carro em um percurso,
calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:*/

/*
Entrada:
fazer a tabela com cout
ler a distancia em forma de km
ler a quantidade de gasolina que um carro consome durante um percuso
variaveis km e litro

Processamente:
if/else para cada mensagem que deve ser colocada.

Saída:

*/

#include<iostream>

using namespace std;

int main() {
	int km, litro, consumo;

	/*
	cout<<"---------------------------------------";
	cout<<"| CONSUMO(km/L)  |   MENSAGEM ";
	cout<<"---------------------------------------";
	cout<<"| Menor que  8   |   Venda o carro     ";
	cout<<"| Entre 8 e 12   |     Ecônomico       ";
	cout<<"| Maior que 12   |  	Super Ecônomico   ";
	*/

	cout<<"\nDigite, qual o valor da distancia que vc vai pecorrer(em forma de km): \n";
	cin >> km;
	
	cout<<"\nDigite, a quantidade gasta de litros de gasolina, durante o percuso da viajem: \n";
	cin >> litro;

	consumo = km/litro;
	
	if(consumo < 8){
		cout<<"\nVenda o caarro\n";
	}else{
		if(consumo = 8 && consumo<=12){
			cout<<"\nEconomico\n";
		}else{
			if(consumo > 12){
				cout<<"\nSuper Economico\n";
			}
		}
	}
}
