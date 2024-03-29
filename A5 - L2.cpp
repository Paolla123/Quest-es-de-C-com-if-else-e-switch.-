/*Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo, conforme a tabela abaixo.
Fa�a um algoritmo que leia o sal�rio e o c�digo do cargo de um funcion�rio e calcule o novo sal�rio.
Se o cargo do funcion�rio n�o estiver na tabela, ele dever� receber 40% de aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.*/

/*
Entrada:
Ler o codigo e o salario de um funcionario

Processamento:
mostrar tabela.
para cada cargo, se for usar if/else vai ter aninhamento, se for switch tem que ver se usa mais de uma variavel dentro do parenteses ou n�o.
calcular o aumento do salario levando em considera��o a porcentagem de aumento;
calcular a diferen�a do salario antigo para o salario com o aumento.

Sa�da:
Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.
*/

#include<iostream>

using namespace std;

int main() {
	int codigo;
	float salario, salario_novo;

	cout<<"\n\t| CODIGO |   CARGO   |  PERCENTUAL  |\n";
	cout<<"\t-------------------------------------";
	cout<<"\n\t|   101  |  Gerente  |     10%      |\n";
	cout<<"\n\t|   102  | Engenheiro|     20%      |\n";
	cout<<"\n\t|   103  |  Tecnico  |     30%      |\n";
	cout<<"\n\t|   104  |   Outro   |     40%      |\n";

	cout<<"\ndigite seu codigo: \n";
	cin >> codigo;

	cout<<"\ndigite seu salario atual: \n";
	cin >> salario;

	switch(codigo) {
		case 101:
			salario_novo = salario+(salario * 0.10);
			break;
		case 102:
			salario_novo = salario+(salario * 0.20);
			break;
		case 103:
			salario_novo = salario+(0.30 * salario);
			break;
		case 104:
			salario_novo = salario+(0.40 * salario);
			break;
		default:
			cout<<"\ncodigo invalido\n";
	}

	cout<<"\nseu novo salario eh: \n"<< salario_novo;
	cout<<"\nseu antigo salario era: \n"<<salario;
	cout<<"\na diferenca entre seu salario antigo e o novo eh:\n"<< (salario_novo - salario);

	/* Vers�o do codigo com if/else
		if(codigo == 101) {
			salario_novo = salario+(salario * 0.10);
		} else {
			if(codigo==102) {
				salario_novo = salario+(salario * 0.20);
			} else {
				if(codigo == 103) {
					salario_novo = salario+(0.30 * salario);
				} else {
					if(codigo == 104) {
						salario_novo = salario+(0.40 * salario);
					}
				}
			}
		}

		cout<<"\nseu novo salario eh: \n" <<salario_novo;
		cout<<"\nseu antigo salario era: \n"<<salario;
		cout<<"\na diferenca entre seu salario antigo e o novo eh:\n"<<	(salario_novo - salario);
	*/
}
