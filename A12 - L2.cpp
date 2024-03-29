/*Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos;
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

/*
Entrada:
variveis idade, tempo de trabalho
couts perguntando quantos anos de trabalho e sua idade
 
Processamento;
if/else que se encaixe nas regras de aposentadoria 
provavelmente também sera necessário o uso de operadores logicos

Saída:
mostrar se a pessoa pode se aposentar ou não
*/

#include<iostream>

using namespace std;

int main(){
	int idade, anos_trabalho;
	
	cout<<"\nDigite, quantos anos vc tem: \n";
	cin >> idade;
	
	cout<<"\nDigite, quantos anos no total vc passou trabalhando: \n";
	cin >> anos_trabalho;
	
	if(idade>=65){
		cout<<"\nvc pode se aposentar, por causa da sua idade\n";
	}else{
		if(anos_trabalho>=30){
			cout<<"\nvc pode se aposentar, devido aos 30 anos de trabalho";
		}else{
			if(idade == 60 && anos_trabalho>=25){
				cout<<"\nvc pode se aposentar, devido a sua idade e a quantidade minima de aos trabalhando\n";
			}else{
				if(idade<60 && anos_trabalho<25){
					cout<<"vc nao possui idade suficiente e nem anos de trabalho suficiente, para poder se aposentar.";
				}
			}
		}
	}
}
