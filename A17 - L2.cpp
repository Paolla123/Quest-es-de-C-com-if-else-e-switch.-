/*17. Leia um n�mero qualquer e verifique se ele � par ou �mpar. Se o n�mero for par, escreva se � m�ltiplo de 10; se for �mpar, escreva se � divis�vel por 5.*/

/*
Entrada:
ler um n�mero qualquer (nesse caso, se n�o foi especificado, pode escolher entre int ou flat)

Processamento:
1� verificar se o numero � par ou impar(a tecnica de usar % pra saber se o resto da divis�o da 0  ou n�o);
2� se o n�mero for par vai ter que escrever se ele � mutiplo de 10 ou n�o(para saber se le � mutiplo de 10, � necessario dividilo por 10 e essa divis�o n�o pode sobrar restos)
3� se o numer for impar, tem que saber se ele divisivel por 5 ou n�o

Sa�da:
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


