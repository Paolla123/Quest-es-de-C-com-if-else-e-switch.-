/*
Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos pagam R$ 100 mais um adicional conforme a seguinte tabela:
• Crianças com menos de 10 anos pagam R$80;
• Conveniados com idade entre 10 e 30 anos pagam R$50;
• Conveniados com idade entre 31 e 60 anos pagam R$ 95;
• Conveniados com mais de 60 anos pagam R$130.
*/

/*
Entrada:
ler a idade do conveniado
variavel idade

Processamento:
1º calcular a taxa de pagamento obrigatório(100 reais) mais o adicional da tabela(dependendo da idade do conveniado)
2º se idade for tal, vai ser valor tal..

Saída:
mostrar o total a ser pago no plano de saúde, para cada idade.
*/

#include<iostream>

using namespace std;

int main(){
	int idade, valor;
	
	cout<<"\nvc eh um conveniado de um plano de saude, digite a sua idade: \n";
	cin >> idade;
	
	if(idade < 10){
		valor = 100 + 80;
		cout<<"\nseu valor a ser pago no plano, eh o total de: \n" <<"R$" <<valor;
	}else{
		if((idade == 10) && (idade <=30)){
			valor = 100 + 50;
			cout<<"\nseu valor a ser pago no plano, eh o total de: \n" <<"R$" <<valor;
		}else{
			if((idade == 31) && (idade <= 60)){
				valor = 100 + 95;
				cout<<"seu valor a ser pago no plano, eh o total de: " <<"R$" <<valor;
			}else{
				if(idade > 60){
					valor = 100 + 130;
					cout<<"\nseu valor a ser pago no plano, eh o total de: \n" <<"R$" <<valor;
				}
			}
		}
	}
}
