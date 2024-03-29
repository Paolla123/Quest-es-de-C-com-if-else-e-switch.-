/*Elabore um algoritmo que leia um número inteiro maior do que zero (máximo de 5 algarismos), verifique e escreva a soma de todos os seus algarismos.
Por exemplo, para o número 251 a soma será 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminar com a mensagem “Número inválido”.*/

/*
Entrada:
ler um numer inteiro que seja maior do que zero e com maximo de 5 algarismo
provavelmente vai ser necessario o uso de mais de uma variavel

Processamento:
fzr a soma de todos os alagarismo do numero inteiro
ai se o numero não for maior que zero, vai ter que existir uma mensagem especificando "numero invalido"

Saída:
mostrar a soma dos algarismo
*/

#include<iostream>

using namespace std;

int main() {
	int n, n1, n2, n3, n4, n5;

	cout<<"\nDigite um numero inteiro, que seja maior do que zero e com o maximo de 5 algarismo\n";
	cin >> n1 >> n2 >> n3 >> n4>> n5;

	n = n1+n2+n3+n4+n5;

	if(n<0) {
		cout<<"\nNumero invalido\n";
	} else {
		if(n>0) {
			cout<<"\na soma dos seus algarismo sao: \n"<<n;
		}

	}

}



