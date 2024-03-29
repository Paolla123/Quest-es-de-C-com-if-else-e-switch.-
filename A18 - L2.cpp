/*Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar, verifique e escreva se o parcelamento foi com juros ou se foi sem juros.*/

/*
Entrada:
ler o valor total que deu uma compra
ler o valor da parcelas que usuario vai pagar 
ler a quantidade de parcelas que ele(a) vai pagar

Processamento:
vai verificar se o parcelamento foi com juros ou sem.(descobrir como saber se alguma compra tem juros ou não)
para descobrir se a pessoa vai ter que pagar juros ou não, é necessario que (multiplique o valor da parcela pelo número total de parcelas,
para encontrar o total que a pessoa pagará se a compra for parcelada.)

Depois de descobrir isso, você ira comparar se todo esse esse calculo dar igual ao valor total da compra ou não, se for igual significa que não precisara pagar juros, se não for precisara
pagar juros.

Saída:
por enquanto, mostar se a parcela saiu com juros ou não.

*/

#include<iostream>

using namespace std;

int main(){
	int parcelas_valor, quant_parcelas;
	float total_comp, total_parcelas;
	
	cout<<"\nQual o valor total da sua compra?\n";
	cin >> total_comp;
	
	cout<<"\nem quantas parcelas vc deseja dividir esse pagamento?\n";
	cin >> quant_parcelas;
	
	cout<<"\nDigite, quantos reais vc vai pagar em cada parcela: \n";
	cin >> parcelas_valor;
	
	total_parcelas = parcelas_valor * quant_parcelas;
	
	if(total_parcelas == total_comp){
		cout<<"\nsua compra foi paga em tempo correto, vc nao recebera juros\n";
	}else{
		cout<<"\nsua compra nao fooi paga em tempo correto, vc tera juros a pagar pelo atraso do pagamento";
	}
	
}
