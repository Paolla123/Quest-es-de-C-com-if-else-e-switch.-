/*Leia a idade de uma pessoa e escreva se ela j� tem idade para tirar carteira de habilita��o (18 anos completos) ou n�o. Se n�o tiver idade, escreva tamb�m*/

/*
Entrada:
ler quanto uma pessoa tem
varavel idade

Processamento:
if/else para definir se a pessoa tem idade suficiente para tirar habilita��o ou n�o

Sa�da:
mostrar se ele pode ou n�o tirar habilita��o 
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
