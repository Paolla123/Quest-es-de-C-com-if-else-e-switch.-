/*Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado o número referente ao dia. Considere que domingo é o dia 1 e sábado é o dia 7.*/

/*
Entrada:
leia um dia 

Processamento:
1º apos fzr a leitura do dia, precisa crirar um algoritmo que saiba se esse dia é um dia ultil, fim de seman ou um dia invalido(isso tudo com if/else ou com switch, dependendo do caso)

2º dia utiil: segunda até sextafeira 
finais de semana: sabado e domingo 
dia invalido: dia  pode se referir a uma data inserida em um formato incorreto ou inválido, ou dias que não existe no mês(porém a primeira opção se encaixa melhor no algoritimo) 

3º levando em consideração que domingo vai ser considerado dia 1 e sabado o dia 7, ou seja, a leitura do dia é em numero.

Saída:
mostrar tudo isso, referente ao dia 

*/

#include<iostream>

using namespace std;

int main(){
	int dia;
	
	cout<<"\ndigite um dia(Considere que domingo eh o dia 1 e sabado eh dia 7): \n";
	cin >> dia;
	
	switch(dia){
		case 2: 
		cout<<"\nseu dia eh uma segunda-feira e um dia util\n";
		break;
		case 3:
			cout<<"\nseu dia eh uma terca-feira e um dia util\n";
		break;
		case 4:
			cout<<"\nseu dia eh uma quarta-feira e um dia util\n";
			break;
		case 5:
			cout<<"\nseu dia eh uma quinta-feira e um dia util\n";
			break;
		case 6:
			cout<<"\nseu dia eh uma sexta-feira e um dia util\n";
			break;
		case 7:
			cout<<"\nseu dia eh um sabado e um final de semana\n";
			break;
		case 1:
			cout<<"\nseu dia eh um domingo e um final de semana\n";
			break;
		default:
			cout<<"\ndia invalido, digite novamente\n";
	}
}
