/*Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa ir� pagar, verifique e escreva se o parcelamento foi com juros ou se foi sem juros.*/

/*
Entrada:
ler o valor total que deu uma compra
ler o valor da parcelas que usuario vai pagar 
ler a quantidade de parcelas que ele(a) vai pagar

Processamento:
vai verificar se o parcelamento foi com juros ou sem.(descobrir como saber se alguma compra tem juros ou n�o)
para descobrir se a pessoa vai ter que pagar juros ou n�o, � necessario que (multiplique o valor da parcela pelo n�mero total de parcelas,
para encontrar o total que a pessoa pagar� se a compra for parcelada.)

Depois de descobrir isso, voc� ira comparar se todo esse esse calculo dar igual ao valor total da compra ou n�o, se for igual significa que n�o precisara pagar juros, se n�o for precisara
pagar juros.

Sa�da:
por enquanto, mostar se a parcela saiu com juros ou n�o.

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
