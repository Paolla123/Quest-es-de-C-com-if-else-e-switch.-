/*A escola “APRENDER” faz o pagamento de seus professores por hora/aula.
Faça um algoritmo que calcule e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:*/

/*
Entrada:
variaveis hora, aula, salario
ler quantas horas e quantos dias o professor trabalhas

Processamento:
mostrar tabela
1º calcular quantos dias a pessoa trabalha dividido pela quantidade de hora
2º fzr todo esse calculo levando em consideração o salario da tabela

Saída:
mostra tudo do procesamento em salario
*/

//ps: pensei de um jeito e acabei fznd de outro :\

#include<iostream>

using namespace std;

int main() {
	int hora, aula, nivel;
	float salario;

	cout<<"\t-------------------------------------------";
	cout<<"\n\t|Professor nivel 1 | R$12,00 por hora aula|\n";
	cout<<"\t-------------------------------------------";
	cout<<"\n\t|Professor nivel 2 | R$17,00 por hora aula|\n";
	cout<<"\t-------------------------------------------";
	cout<<"\n\t|professor nivel 3 | R$25,00 por hora aula|\n";
	cout<<"\t-------------------------------------------";

	cout<<"\nDigite, o numero do nivel em que vc da aula: \n";
	cin >> nivel;

	cout<<"\nDigite, quantas aulas vc da na semana: \n";
	cin >> aula;

	cout<<"\nDigite quantas horas de aula, vc ensina por dia: \n";
	cin>> hora;

	switch(nivel) {
		case 1:
			salario = aula * (12 * hora);
			break;
		case 2:
			salario = aula * (17 * hora);
			break;
		case 3:
			salario = aula * (25 * hora);
			break;
		default:
			cout<<"nivel invalido";
	}

	cout<<"\nSeu valor salarial eh: \n" <<salario;

	/* VERSÃO COM IF/ELSE

	if(nivel == 1){
		salario = aula * (12 * hora);
	}else{
		if(nivel == 2){
			salario = aula * (17 * hora);
		}else{
			if(nivel == 3){
				salario = aula * (25 * hora);
			}
		}
	}

	cout<<"Seu valor salarial eh: " <<salario;
	*/
}
