/*Calcule as raizes de uma equacao de 2o grau. Observe que:
. x = -b Å+-(baskara) Åraiz quadrada de delta/2a, onde delata = B^2 . 4ac;
. ax2 + bx + c = 0 representa uma equacao de 2o grau;
. A variavel a tem que ser diferente de zero. Caso seja igual, escreva a mensagem Å"Nao È equacao de segundo grau";
. Se delta < 0, nao existe real. Escreva a mensagem ÅgNao existe raizÅh;
. Se delta = 0, existe uma raiz real. Escreva a raiz e a mensagem ÅgRaiz unicaÅh;
. Se delta >= 0, escreva as duas raizes reais.
*/

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float a, b, c, delta;
	float x1, x2;

	cout<<"\nDigite o valor de A: \n";
	cin >> a;
	if(a != 0) {
		cout<<"Digite o valor de B: ";
		cin >> b;
		cout<<"Digite o valor de C: ";
		cin >> c;
		delta = (b*b)-4*a*c;

		if(delta > 0) {
			x1 = (-b+sqrt(delta))/2*a;
			x2 = (-b-sqrt(delta))/2*a;
			cout<< "x1 = "<< x1;
			cout<< "\nx2 = "<< x2;
		} else {
			if(delta == 0) {
				x1 = -b/2*a;
				cout<< "x = " << x1;
			} else {
				cout<<"Nao existe raiz";
			}
		}
	} else {
		cout<<"\nao eh equacao de segundo grau\n";
	}
}


