/*Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada.*/

/*
Entrada:
1ºvariaveis para letra e número
2º perguntas para o usuario digitar o numero e a letra

Processamento:
descobrir os antecessores(provavelmente utilizando if/else pra cada letra do alfabeto)


Saída:
*/

#include<iostream>

using namespace std;

int main() {
	int n, soma_a, soma_s, k, b, c, d, e, f, g, h, i, j;
	char letra;

	cout<<"\nDigite um numero inteiro: \n";
	cin >> n;

	cout<<"\nDigite 'a', se caso vc queira ver a soma dos numeros antecessores e's' para sucessores: \n";
	cin >> letra;

	if(letra == 'a') {

		k = n - 1;
		b = k - 1;
		c = b - 1;
		d = c - 1;
		e = d - 1;
		f = e - 1;
		g = f - 1;
		h = g - 1;
		i = h - 1;
		j = i - 1;

		soma_a = k + b + c + d + e + f + g + h + i + j;
		cout << "a soma dos seus numeros antecessores, eh: " <<soma_a;

	} else {
		if(letra == 's') {
			
			k = n + 1;
			b = k + 1;
			c = b + 1;
			d = c + 1;
			e = d + 1;
			f = e + 1;
			g = f + 1;
			h = g + 1;
			i = h + 1;
			j = i + 1;

			soma_s = k + b + c + d + e + f + g + h + i + j;
			cout << "a soma dos seus numeros sucessores, eh: " <<soma_s;

		}
	}

	//atividade de casa, fazer uma coleção de tabuada 
}
