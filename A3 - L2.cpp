/* Calcule o peso ideal de uma pessoa. Dados de entrada: altura e g�nero (�m�-masculino ou �f�-feminino). Utilize as seguintes f�rmulas para c�lculo do peso ideal:
� Masculino = (72,7 x altura) - 58
� Feminino = (62,1 x altura) - 44,7
*/

#include<iostream>

using namespace std;

int main() {
	float altura, pesoidealm, pesoidealf;
	char genero;

	cout<<"\nDigite, a sua altura: \n";
	cin >> altura;

	cout<<"\nDigite o seu genero, 'm'-masculino e 'f'-feminino\n";
	cin >> genero;

	if(genero == 'm') {
		pesoidealm = (72.7 * altura) - 58;
		cout<<"\nSeu peso ideal, eh:\n" <<pesoidealm;
	} else {
		if(genero == 'f') {
			pesoidealf = (62.1 * altura) - 44.7;
			cout<<"\nSeu peso ideal, eh:\n" <<pesoidealf;
		}
	}
}


