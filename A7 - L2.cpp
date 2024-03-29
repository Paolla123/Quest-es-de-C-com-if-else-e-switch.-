/* Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade
de cada um e calcule o valor a ser pago por aquele lanche. */

// refaça a questão com switch

#include<iostream>

using namespace std;

int main() {
	int cod_s, cod_b;
	float quant_s, quant_b;

	cout<<"\t_______________________________________________\n";
	cout<<"\n	                SANDUICHE                    \n";
	cout<<"\t_______________________________________________";
	cout<<"\n\t| Codigo |    Descricao    | Preco Unitario |\n";
	cout<<"  \t|--------|-----------------|----------------|";
	cout<<"\n\t|  100   |  Cachorro Quente|      R$1,10    | \n";
	cout<<"\n\t|  101   |   Bauru Simples |      R$1,30    |\n";
	cout<<"\n\t|  102   |   Bauru com ovo |      R$1,50    |\n";
	cout<<"\n\t|  103   |    Hamburguer   |      R$1,10    |\n";
	cout<<"\n\t|  104   |   Chees Burguer |      R$1,30    |\n";
	cout<<"\t______________________________________________";

	cout<<"\nQuantos sanduiche deseja comprar?\n";
	cin >> quant_s;

	cout<<"\nDigite o codigo, da sua opcao de sanduiche: \n";
	cin >> cod_s;

	cout<<"\t_______________________________________________\n";
	cout<<"\n	                BEBIDAS                    \n";
	cout<<"\t_______________________________________________";
	cout<<"\n\t| Codigo |    Descricao    | Preco Unitario |\n";
	cout<<"\t  |--------|-----------------|----------------|";
	cout<<"\n\t|  105   |   Refrigerante  |      R$1,00    |\n";
	cout<<"\n\t|  106   |       Suco      |      R$2,00    |\n";
	cout<<"\n\t|  107   |      Nescau     |      R$1,50    |\n";
	cout<<"\t_______________________________________________";

	cout<<"\nQuantas bebidas deseja comprar?\n";
	cin >> quant_b;

	cout<<"\nDigite o codigo da sua opcao de bebida: \n";
	cin >> cod_b;

	switch(cod_s) {
		case 100:
			quant_s = quant_s * 1.10;
			break;
		case 101:
			quant_s = quant_s * 1.30;
			break;
		case 102:
			quant_s = quant_s * 1.50;
			break;
		case 103:
			quant_s = quant_s * 1.10;
			break;
		case 104:
			quant_s = quant_s * 1.30;
			break;
		default:
			cout<<"\ncodigo invalido\n";
	}

	switch(cod_b) {
		case 105:
			quant_b = quant_b * 1.00;
			break;
		case 106:
			quant_b = quant_b * 2.00;
			break;
		case 107:
			quant_b = quant_b * 1.50;
			break;
		default:
			cout<<"\ncodigo invalido\n";
	}
	
	cout<<"o valor a ser pago pelo seu lanche eh: "<< quant_s + quant_b;

	/* VERSÃO COM IF/ELSE
	
		if(cod_s == 100 && cod_b == 105) {
			valor = (quant_s * 1.10) + (quant_b * 1.00);
		} else {
			if(cod_s == 101 && cod_b == 106) {
				valor = (quant_s * 1.30) + (quant_b * 2.00);
			} else {
				if(cod_s == 102 && cod_b == 107){
					valor = (quant_s * 1.50) + (quant_b * 1.50);
				}else{
					if(cod_s == 103 && cod_b == 105){
						valor = (quant_s * 1.10) + (quant_b * 1.00);
					}else{
						if(cod_s == 104 && cod_b == 106){
							valor = (quant_s * 1.30) + (quant_b * 2.00);
						}else{
							if(cod_s == 100 && cod_b == 106){
									valor = (quant_s * 1.10) + (quant_b * 2.00);
							}else{
								if(cod_s == 100 && cod_b == 107){
										valor = (quant_s * 1.10) + (quant_b * 1.50);
								}else{
									if(cod_s == 101 && cod_b == 105){
											valor = (quant_s * 1.30) + (quant_b * 1.00);
									}else{
										if(cod_s == 101 && cod_b == 107){
												valor = (quant_s * 1.30) + (quant_b * 1.50);
										}else{
											if(cod_s == 102 && cod_b == 105){
													valor = (quant_s * 1.50) + (quant_b * 1.00);
											}else{
												if(cod_s == 102 && cod_b == 106){
															valor = (quant_s * 1.50) + (quant_b * 2.00);
												}else{
													if(cod_s == 103 && cod_b == 106){
																valor = (quant_s * 1.10) + (quant_b * 2.00);
													}else{
														if(cod_s == 103 && cod_b == 107){
																	valor = (quant_s * 1.10) + (quant_b * 1.50);
														}else{
															if(cod_s == 104 && cod_b == 107){
																		valor = (quant_s * 1.30) + (quant_b * 1.50);
															}else{
																if(cod_s == 104 && cod_b == 105){
																			valor = (quant_s * 1.30) + (quant_b * 1.00);
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		cout<<"o valor a ser pago pelo seu lanche eh: "<<valor;

		*/
}

