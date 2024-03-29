/*Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e escreva-os na ordem solicitada.

/*
Entrada:
ler 3 numeros inteiros
ler qual ordem vai ser escolhida

processamento:
ler os números e colocar na ordem escolhida pelo o usuario
vai ter que usar if/else

saída:
mostrar tudo isso.*/

#include<iostream>

using namespace std;

int main() {
	int n1, n2, n3, aux_1, aux_2, aux_3;
	char ordem;

	cout<<"\nDigite um numero: \n";
	cin >> n1;

	cout<<"\nAgora, digite outro numero: \n";
	cin >> n2;

	cout<<"\nDigite mais um numero, diferente dos outros: \n";
	cin >> n3;


	cout<<"\nEm que ordem vc deseja colocalos, 'c' para crescente e 'd' para decrescente: \n";
	cin >> ordem;

	if(ordem == 'c') {
		if(n1<n3 && n2<n3) {
			aux_1 = n3;
		} else {
			if(n1<n2 && n3<n2) {
				aux_2 = n2;
			} else {
				if(n2<n1 && n3<n1) {
					aux_3 = n1;
				}
			}

			cout<<"\nseus numeros em forma decrescente sao: \n" <<aux_1 <<aux_2 <<aux_3;
		}
	} else {
		if(ordem == 'd') {
			if(n1<n2 && n1<n3) {
				aux_1 = n1;
			} else {
				if(n2<n1 && n2<n3) {
					aux_2 = n2;
				} else {
					if(n3<n1 && n3<n2) {
						aux_3 = n3;
					}
				}
			}
		}

		cout<<"\nseus numeros em forma decrescente sao: \n" <<aux_1 <<aux_2 <<aux_3;
	}
}
