/*A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 10, respectivamente, a um trabalho de laborat�rio,
a uma avalia��o semestral e a um exame final. A m�dia das tr�s notas mencionadas anteriormente obedece aos pesos:
Trabalho de Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5. De acordo com o resultado,
mostre na tela se o aluno est� reprovado (media entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi aprovado.*/

/*
Entrada:
variaveis trabalho, avaliacao_s, exame_final
couts perguntando sobre as notas

Processamento:
processo de somatorio e divis�o, dessa forma obtendo o resultado(conta basica de avaliar notas)
uso de if else para a funcionalidade de aprovado, recupera��o ou reprovada

Sa�da:
informar se a pessoa passou, ficou de recupera��o ou se esta reprovada;
*/
									
#include<iostream>

using namespace std;

int main() {
	int p1 = 2, p2 = 3, p3 = 5, m;
	float n1, n2, n3;

	cout<<"\nDigite a nota que vc tirou no trabalho de laboratorio: \n";
	cin >> n1;

	cout<<"\nDigite a nota que vc tirou na sua avaliacao semestral: \n";
	cin >> n2;

	cout<<"\nDigite a nota que vc tirou na prova final: \n";
	cin >> n3;

	m = p1*n1 + p2*n2 + p3*n3;
	m = m/10;

	if(m <= 2.9 ) {
		cout<<"\nsua nota ficou abaixo da media, vc esta reprovado(a) :(\n";
	} else {
		if(m <= 4.9) {
			cout<<"\nvc ficou de recuperacao :| \n";
		} else {
			if(m >= 5){
				cout<<"\nParabens, vc foi aprovada :)\n";
			}
		}
	}
}
