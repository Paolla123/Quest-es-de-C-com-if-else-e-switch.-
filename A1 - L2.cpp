/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um triângulo e, se forem,
verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais;
• Escaleno: tem os comprimentos dos três lados diferentes.
*/

/*
Entrada:
ler tres valores para X, Y e Z

Processamento:
1º verificar e escrever se o x, y, z podem corresponder ao comprimento de um triângulo(provavelmente, uso de if/else)
2º se correspoderem a um triângulo, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos.(uso de if/else)

Saída:
mostrar se os valores dado as variaveis formam um triangulo(ou não) e depois especificar que tipo de triângulo é.
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






