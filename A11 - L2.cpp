/*Elabore um algoritmo que leia um n�mero inteiro maior do que zero (m�ximo de 5 algarismos), verifique e escreva a soma de todos os seus algarismos.
Por exemplo, para o n�mero 251 a soma ser� 8 (2 + 5 + 1). Se o n�mero lido n�o for maior do que zero, o programa terminar com a mensagem �N�mero inv�lido�.*/

/*
Entrada:
ler um numer inteiro que seja maior do que zero e com maximo de 5 algarismo
provavelmente vai ser necessario o uso de mais de uma variavel

Processamento:
fzr a soma de todos os alagarismo do numero inteiro
ai se o numero n�o for maior que zero, vai ter que existir uma mensagem especificando "numero invalido"

Sa�da:
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



