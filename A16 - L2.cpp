/*Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos completos) ou não. Se não tiver idade, escreva também*/

/*
Entrada:
ler quanto uma pessoa tem
varavel idade

Processamento:
if/else para definir se a pessoa tem idade suficiente para tirar habilitação ou não

Saída:
mostrar se ele pode ou não tirar habilitação 
*/

#include<iostream>

using namespace std;

int main(){
	int idade;
	
	cout<<"\nDigite a sua idade:\n";
	cin >> idade;
	
	if(idade>=18){
		cout<<"\nvc pode tirar carteira de habilitacao :)\n";
	}else{
		cout<<"\nvc nao pode tirar carteira de habilitacao :(\n";
	}
}
