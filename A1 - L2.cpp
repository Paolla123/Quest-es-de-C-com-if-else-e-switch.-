/*Dados tr�s valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um tri�ngulo e, se forem,
verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles n�o formarem um tri�ngulo, escrever esta mensagem. Considere as seguintes propriedades:
� O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
� Equil�teros: tem os comprimentos dos tr�s lados iguais;
� Is�sceles: tem os comprimentos de dois lados iguais;
� Escaleno: tem os comprimentos dos tr�s lados diferentes.
*/

/*
Entrada:
ler tres valores para X, Y e Z

Processamento:
1� verificar e escrever se o x, y, z podem corresponder ao comprimento de um tri�ngulo(provavelmente, uso de if/else)
2� se correspoderem a um tri�ngulo, verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos.(uso de if/else)

Sa�da:
mostrar se os valores dado as variaveis formam um triangulo(ou n�o) e depois especificar que tipo de tri�ngulo �.
*/

#include<iostream>

using namespace std;

int main() {
	int x, y, z;

	cout<<"\nDigite um valor pra X: \n";
	cin >> x;

	cout<<"\nDigite um valor pra Y: \n";
	cin >> y;

	cout<<"\nDigite um valor pra Z: \n";
	cin >> z;
	
	if(x==y && y==z){
		cout<<"\nSeus valores correspondem a um triangulo equilatero :)\n";
	}else{
		if((x==y) || (x==z) || (z==y)){
			cout<<"Seus valores correspondem a um triangulo isoseles :)\n";
		}else{
			if((x==y)!=(y=z)){
				cout<<"Seus valores correspondem a um triangulo Escaleno :)\n";
			}
		}
	}		
	
}






