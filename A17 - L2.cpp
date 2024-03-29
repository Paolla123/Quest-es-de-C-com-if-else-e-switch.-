/*17. Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo de 10; se for ímpar, escreva se é divisível por 5.*/

/*
Entrada:
ler um número qualquer (nesse caso, se não foi especificado, pode escolher entre int ou flat)

Processamento:
1º verificar se o numero é par ou impar(a tecnica de usar % pra saber se o resto da divisão da 0  ou não);
2º se o número for par vai ter que escrever se ele é mutiplo de 10 ou não(para saber se le é mutiplo de 10, é necessario dividilo por 10 e essa divisão não pode sobrar restos)
3º se o numer for impar, tem que saber se ele divisivel por 5 ou não

Saída:
mostrar na tela, tudo isso.
*/

#include<iostream>

using namespace std;

int main() {
	int n;

	cout<<"\nDigite um numero: \n";
	cin >> n;

	if((n%2 == 0) && (n%10 == 0)) {
		cout<<"\nseu numero, eh um numero par\n";
		cout<<"\nseu numero par, eh mutiplo de 10\n";
	} else {
		if((n%2 == 0) && (n%10 != 0)) {
			cout<<"\nseu numero, eh um numero par\n";
			cout<<"\nseu numero par, nao eh mutiplo de 10\n";
		} else {
			if((n%2 != 0) && (n%5 == 0)) {
				cout<<"\nseu numero, eh um numero impar\n";
				cout<<"\nseu numero impar, eh divisivel por 5\n";
			} else {
				if((n%2 != 0) && (n%5 != 0)) {
					cout<<"\nseu numero, eh um numero impar\n";
					cout<<"\nseu numero impar, nao eh divisivel por 5\n";
				}
			}
		}
	}
}


