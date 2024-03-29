/*
Leia 3 números inteiros e escreva uma das seguintes mensagens:
• Todos os números são iguais;
• Todos os números são diferentes;
• Apenas dois números são iguais.
*/

/*
Entrada:
3 variaveis do tipo int
fzr a leitura de 3 numero inteiros 

Processamento:
if else, para saber quais números são iguais, quais são diferentes e apenas dois iguais(caso exista)

Saída:
mostrar tudo isso do processamento 

*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	
	cout<<"\ndigite 3 numeros inteiros e separados um dos outros: \n";
	cin >> n1 >> n2 >> n3;
	
	if(n1 == n2 && n2 == n3){
		cout<<"\ntodos seus numeros sao iguais \n"; 
	}else{
		if(n1 != n2 && n2 != n3){
			cout<<"\ntodos os numeros sao diferentes\n";
		}else{
			if(n1 == n2 || n2 == n3){
				cout<<"\nApenas dois dos seus numeros sao iguais\n";
			}else{
				if(n1 == n3){
					cout<<"\nApenas dois dos seus numeros sao iguais\n";
				}
			}
		}
	}
}
